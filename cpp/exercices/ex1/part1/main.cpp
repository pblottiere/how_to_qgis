#include "hello.h"

int main( int argc, char** argv )
{
  Hello h1( 1 );
  h1.print();

  const int n2 = 2;
  Hello *h2 = new Hello( n2 );
  h2->print();
  delete h2;

  return 0;
}
