#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <naah.h>

class MyObject : public naah::Class {
 public:
  static MyObject NewInstance(double value);
  MyObject(double value);

  double PlusOne();
  double counter_;
};

#endif
