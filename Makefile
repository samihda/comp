.POSIX:

CC		= c99
CFLAGS	= -Wall -Wextra

all: main

main: src/main.c
	$(CC) $(CFLAGS) -o $@ src/main.c

clean:
	rm main
