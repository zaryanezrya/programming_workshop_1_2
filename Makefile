clear: 
	rm -rf *.o *.a *_test

fmt: 
	clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

check_fmt:
	clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

# ---

add.o: add.c add.h
	gcc -g -c add.c -o add.o

add.a: add.o
	ar rc add.a add.o

main.o: main.c
	gcc -g -c main.c -o main.o

add_test: main.o add.a
	gcc -g -static -o add_test main.o add.a

# ---

test: add_test
	./add_test
