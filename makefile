.POSIX:
.SUFFIXES:

CC = cc
CFLAGS = -Wall -Werror
LDFLAGS = 
LDLIBS = 
PREFIX = /usr/local

all: build/libcursedpotato.a

build/libcursedpotato.a: build/modes.o build/input.o build/misc.o build/move.o build/init.o
	ar rcs $@  build/modes.o build/input.o build/misc.o build/move.o build/init.o

build/modes.o: src/modes.c
	mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/input.o: src/input.c
	mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/misc.o: src/misc.c
	mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/move.o: src/move.c
	mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/init.o: src/init.c
	mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf build

install: all
	mkdir -p $(PREFIX)/include/netyx/
	cp build/libcursedpotato.a $(PREFIX)/lib/
	cp include/* $(PREFIX)/include/netyx/
