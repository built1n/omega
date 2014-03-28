SOURCES = exec.o omega.o util.o
HEADERS = omega.h util.h
CFLAGS = -g -O3 -I. -std=gnu99 -Wall
all: $(SOURCES) Makefile $(HEADERS)
	gcc $(SOURCES) -o omega -O3 -g
clean:
	rm *.o -f
	rm omega -f
