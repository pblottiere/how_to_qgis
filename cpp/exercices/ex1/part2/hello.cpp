#include "hello.h"

Hello::Hello( const std::string &word )
  : mWord( word )
{
}

Hello::~Hello()
{
}

void Hello::hello()
{
  std::cout << "Hello " << mWord << std::endl;
}
