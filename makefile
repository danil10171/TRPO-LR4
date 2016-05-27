INCLUDE=-I ./thirdparty
INCLUDE1=-I ./src

all: bin/main bin/test

bin/main: obj/main.o obj/function.o
	mkdir bin
	gcc -o bin/main obj/main.o obj/function.o -Wall -lm

bin/test: obj/function_test.o obj/main_test.o
	gcc -o bin/test obj/main_test.o obj/function_test.o obj/function.o -Wall -lm

test:	bin/test
	./bin/test

obj/main.o: src/main.c
	mkdir obj
	gcc $(INCLUDE1) -c src/main.c -Wall -o obj/main.o

obj/function.o: src/function.c
	gcc $(INCLUDE1) -c src/function.c -Wall -o obj/function.o

obj/main_test.o: test/main_test.c
	gcc $(INCLUDE) -c test/main_test.c -Wall -o obj/main_test.o

obj/function_test.o: test/function_test.c
	gcc $(INCLUDE1) $(INCLUDE) -c test/function_test.c -Wall -o obj/function_test.o -lm

.PHONY: clean
clean:
	rm -f -r bin/ obj/
