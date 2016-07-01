#include "printer.h"

using namespace printer;

void Print::print( Lang lang )
{
  switch (lang)
  {
    case EN:
    {
      std::cout << "Hello World!" << std::endl;
      break;
    }

    case FR:
    {
      std::cout << "Bonjour le monde!" << std::endl;
      break;
    }

    case ES:
    {
      std::cout << "Hola el mundo!" << std::endl;
      break;
    }

    default:
      std::cout << "Invalid lang" << std::endl;
  }
}
