all:
	g++ -std=c++11 -Wall -fPIC -c printer.cpp
	g++ -shared -Wl,-soname,libhello.so -o libhello.so printer.o
	g++ -std=c++11 main.cpp -o main -L. -lhello

clean:
	rm -f main libhello.so *.o
