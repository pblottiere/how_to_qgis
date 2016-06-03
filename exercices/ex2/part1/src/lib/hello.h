#ifndef HELLO_H
#define HELLO_H

class Hello
{
  public:
    Hello( int number );
    ~Hello();

    void print() const;

  private:
    int mNumber;
};

#endif
