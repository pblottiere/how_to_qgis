.PHONY: all

all: clean
	cd src && make
	cd python && make

check:
	@cd tests && make

clean:
	cd src && make clean
	cd python && make clean
