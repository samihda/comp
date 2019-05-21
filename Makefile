.POSIX:

CC		= c99
CFLAGS	= -Wall -Wextra -Os

all: main

main: src/main.c obj/util.o
	$(CC) $(CFLAGS) -o $@ $^

obj/util.o: src/util.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm main
