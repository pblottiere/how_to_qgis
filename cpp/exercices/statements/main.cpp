#include <iostream>
#include <list>

int main()
{
  // if
  int a = 42;

  if ( a > 100 || a < 0)
     a = 0;
  else if ( a == 42 )
     std::cout << "Awesome!" << std::endl;
  else
     std::cout << "Nothing todo" << std::endl;

  // switch/case
  switch ( a )
  {
    case 1:
      std::cout << "a = 1" << std::endl;
      break;

    case 2:
      std::cout << "a = 2" << std::endl;
      break;

    default:
      std::cout << "Doesn't matter" << std::endl;
  }

  // for on int
  for ( int i = 0; i < 10; i++ )
     a += 1;

  std::cout << a << std::endl;

  // for with iterator
  typedef std::list<int> Values;
  Values values;
  values.insert( values.begin(), 3 );
  values.insert( values.begin(), 42 );
  Values::iterator it;

  for( it = values.begin(); it != values.end(); it++ )
     a += *it;

  std::cout << a << std::endl;

  // while
  int i = 0;
  while ( i < 10 )
  {
    a += i;
    i++;
  }

  std::cout << a << std::endl;

  return 0;
}
