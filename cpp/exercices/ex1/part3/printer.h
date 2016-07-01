#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>

namespace printer
{
  enum Lang
  {
    EN,
    FR,
    ES
  };

  class Print
  {
    public:
      static void print( Lang lang );
      static inline void print( const std::string &word )
        { std::cout << word << std::endl; }
  };
}

#endif
