.POSIX:

CC		= c99
CFLAGS	= -Wall -Wextra -Os

all: main

main: src/main.c obj/sort.o obj/search.o obj/util.o
	$(CC) $(CFLAGS) -o $@ $^

obj/%.o: src/%.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm main
