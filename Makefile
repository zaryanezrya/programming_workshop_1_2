clear:
	rm -rf *.o *.a *_test

fmt:
	clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

check_fmt:
	clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

# ---

add.o: add.c add.h
	gcc -c add.c -o add.o

add.a: add.o
	ar rc add.a add.o

add_test.o: add_test.c add.h
	gcc -c add_test.c -o add_test.o

add_test: add_test.o add.a
	gcc -static -o add_test add_test.o add.a 


test: add_test
	./add_test
