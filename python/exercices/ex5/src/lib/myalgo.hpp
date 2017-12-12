#ifndef MYALGO_H
#define MYALGO_H

#include <string>

class MyAlgo
{
    public:
        MyAlgo( int value );

        bool run( const std::string &path );

    private:
        int _value;
};

#endif
