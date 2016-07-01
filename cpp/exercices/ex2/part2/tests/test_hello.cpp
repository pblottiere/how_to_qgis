#include <iostream>
#include "assert.h"
#include "hello.h"

int main()
{
  std::cout << "Run testsuite" << std::endl;

  Hello h( 3 );
  assert( h.number() == 3 );

  h.setNumber( 10 );
  assert( h.number() == 10 );

  std::cout << "No errors!" << std::endl;
}
