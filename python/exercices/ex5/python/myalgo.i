%module myalgo
%{
    #define SWIG_FILE_WITH_INIT
    #include <myalgo.hpp>
%}
%include <std_string.i>
%include <myalgo.hpp>
