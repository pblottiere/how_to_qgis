.PHONY: all

all: clean lib

lib:
	g++ -Wall -fPIC -c myalgo.cpp
	g++ -shared -Wl,-soname,libmyalgo.so -o libmyalgo.so myalgo.o

clean:
	rm -f *.o *.so
