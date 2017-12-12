#include "myalgo.hpp"

#include <iostream>
#include <fstream>

MyAlgo::MyAlgo( int value )
    : _value( value )
{
}

bool MyAlgo::run( const std::string &path )
{
    bool rc = false;

    std::ofstream myfile;
    myfile.open (path);
    if ( myfile.is_open() )
    {
        myfile << _value * 2;
        myfile.close();
        rc = true;
    }

    return rc;
}
