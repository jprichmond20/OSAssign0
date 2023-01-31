CC = gcc
CFLAGS = -Wall


all: hello helloArgs redirect string tokenize options

%: %.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f hello
	rm -f helloArgs
	rm -f redirect
	rm -f tokenize
	rm -f options
