#ifndef HELLO_H
#define HELLO_H

#include <iostream>

class Hello
{
  public:
    Hello( const std::string &word );
    ~Hello();

    virtual void print() const = 0;

  protected:
    void hello();

  private:
    std::string mWord;
}

#endif
