#include "helloworld.h"

HelloWorld::HelloWorld()
  : Hello( "world" )
{
  mName = new std::string( "HelloWorld" );
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::print() const
{
  std::cout << "HelloWorld print: " << mWord << std::endl;
  hello();
}
