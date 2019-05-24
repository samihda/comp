.POSIX:

CC		= c99
CFLAGS	= -Wall -Wextra -Os

all: main

main: src/main.c obj/sort.o obj/util.o
	$(CC) $(CFLAGS) -o $@ $^

obj/sort.o: src/sort.c
	$(CC) -c $(CFLAGS) -o $@ $<

obj/util.o: src/util.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm main
