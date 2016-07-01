#ifndef HELLOWORLD_H
#define HELLOWORLD_H

class HelloWorld : public Hello
{
  public:
    HelloWorld();
    ~HelloWorld();

    void print() const override;

  private:
    std::string *mName;
};

#endif
