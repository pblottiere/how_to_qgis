#include <iostream>
#include "hello.h"

Hello::Hello( int number )
  : mNumber( number )
{
}

Hello::~Hello()
{
}

void Hello::print() const
{
  std::cout << "Hello " << mNumber << std::endl;
}

void Hello::setNumber( int number )
{
  mNumber = number + 1;
}

int Hello::number() const
{
  return mNumber;
}
