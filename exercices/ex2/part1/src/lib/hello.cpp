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
