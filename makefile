make: execute.c
	gcc execute.c

run: make
	./a.out

clean:
	rm *.c~
