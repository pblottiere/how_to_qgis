#ifndef HELLO_H
#define HELLO_H

class Hello
{
  public:
    Hello( int number );
    ~Hello();

    void print() const;

    void setNumber( int number );

    int number() const;

  private:
    int mNumber;
};

#endif
