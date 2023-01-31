CC = gcc
CFLAGS = -Wall


all: hello helloArgs redirect string tokenize options ages loops arrays

%: %.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f hello
	rm -f helloArgs
	rm -f redirect
	rm -f tokenize
	rm -f options
	rm -f ages
	rm -f loops
	rm -f arrays
