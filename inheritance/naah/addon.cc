#include <naah.h>

class Base : public naah::Class {
 public:
  Base(uint32_t num) : _num(num) {}

  virtual std::string GetReal() = 0;

  uint32_t num() { return _num; }
  void set_num(uint32_t num) { _num = num; }

  uint32_t Add(uint32_t num) {
    _num += num;
    return _num;
  }

  uint32_t _num;

  static std::string GetRealStatic(Base* base) { return base->GetReal(); }
};

class SubA : public Base {
 public:
  SubA(uint32_t num) : Base(num) {}
  std::string GetReal() override { return "A"; }

  uint32_t Sub(uint32_t num) {
    _num -= num;
    return _num;
  }

  static uint32_t AcceptA(SubA* a) { return a->_num; }
};

class SubB : public Base {
 public:
  SubB(uint32_t num) : Base(num) {}

  std::string GetReal() override { return "B"; }

  uint32_t Mul(uint32_t num) {
    _num *= num;
    return _num;
  }

  static uint32_t AcceptB(SubB* b) { return b->_num; }
};

NAAH_REGISTRATION {
  using reg = naah::Registration;

  reg::Class<Base>("Base")
      .InstanceMethod<&Base::GetReal>("getReal")
      .InstanceMethod<&Base::Add>("add")
      .InstanceAccessor<&Base::num, &Base::set_num>("num")
      .StaticMethod<Base::GetRealStatic>("getReal");
  reg::Class<SubA>("SubA")
      .Inherits<Base>()
      .Constructor<uint32_t>()
      .InstanceMethod<&SubA::Sub>("sub")
      .StaticMethod<SubA::AcceptA>("acceptA");
  reg::Class<SubB>("SubB")
      .Inherits<Base>()
      .Constructor<uint32_t>()
      .InstanceMethod<&SubB::Mul>("mul")
      .StaticMethod<SubB::AcceptB>("acceptB");
}

NAAH_EXPORT
