#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <naah.h>
#include <naah_friend.h>

class MyObject : naah::Class {
  MyObject(double value);

  double GetValue();
  double PlusOne();
  MyObject Multiply(std::optional<double> num);

  double value_;

  NAAH_FRIEND
};

#endif
