all:
	g++ -Wall -fPIC -c hello.cpp
	g++ -shared -Wl,-soname,libhello.so -o libhello.so hello.o
	g++ main.cpp -o main -L. -lhello

clean:
	rm -f main libhello.so *.o
