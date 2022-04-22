#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <naah.h>

class MyObject : public naah::Class {
 public:
  static MyObject NewInstance(double arg);
  double Val() const { return val_; }
  MyObject(double val);

 private:
  double val_;
};

#endif
