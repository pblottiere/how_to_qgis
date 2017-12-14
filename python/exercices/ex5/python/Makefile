all: swig lib

swig:
	swig -c++ -python -I../src/lib myalgo.i

lib:
	g++ -O2 -fPIC -c ../src/lib/myalgo.cpp
	g++ -O2 -fPIC -c myalgo_wrap.cxx -I/usr/include/python2.7 -I../src/lib
	g++ -shared myalgo.o myalgo_wrap.o -o _myalgo.so

clean:
	rm -f *.o *.cxx *.so *.py *.pyc
