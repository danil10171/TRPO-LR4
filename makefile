sort: main.o function.o
	gcc -o desc main.o function.o -lm

main.o: main.c
	gcc -c main.c -lm

function.o: function.c
	gcc -c function.c -lm
