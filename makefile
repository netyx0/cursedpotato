.POSIX:
.SUFFIXES:

CC = cc
CFLAGS = -Wall -Werror
LDFLAGS = 
LDLIBS = 
PREFIX = /usr/local

all: build/libcinderpelt.a

build/libcinderpelt.a: build/move.o build/init.o
	ar rcs $@  build/move.o build/init.o

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
	cp build/libcinderpelt.a $(PREFIX)/lib/
	cp include/* $(PREFIX)/include/netyx/
