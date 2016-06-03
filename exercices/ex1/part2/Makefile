all:
	g++ -std=c++11 -Wall -fPIC -c hello.cpp helloworld.cpp
	g++ -shared -Wl,-soname,libhello.so -o libhello.so hello.o helloworld.o
	g++ -std=c++11 main.cpp -o main -L. -lhello

clean:
	rm -f main libhello.so *.o
