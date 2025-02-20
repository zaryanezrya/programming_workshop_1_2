#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://metanit.com/c/patterns/2.1.php

/*
  Для хранения объектов в программе на языке С в общем случае у нас есть 3
  варианта, где хранить объекты:
  1. Стек (автоматическая память)
  2. Статическая память
  3. Динамическая память (иначе говоря куча или heap)
*/

// Стек (автоматическая память)

void example_stack1() { int a = 1; }

void example_stack2() {
  int a = 1;
  int b = 2;
}

void example_stack3(int arg1, int arg2) {
  int a = 1;
  int b = 2;
  int c = arg1;
  int d = arg2;
}

// Статическая память

int n1 = 1;
static int n2 = 2;
void example_static1() { static int n3 = 3; }

void example_static2(void) { char *message = "hello"; }

// Динамическая память

// int* example_dynamic1(){
//   int a[] = {1, 2, 3};
//   return a;
// }

void example_dynamic2() {
  int *data =
      malloc(sizeof(int) * 100); // выделение памяти для 100 значений int
  // работа с data
  free(data); // освобождение памяти
}

int *example_dynamic3() {
  int a[] = {10, 20, 30};
  int *res = malloc(sizeof(int) * 3);
  memcpy(res, a, sizeof(int) * 3);
  res[2] = 40;
  return res;
}

// Структуры
// https://learnc.info/c/structures.html

typedef struct {
  int a;
  int b;
} my_structure_t;

my_structure_t example_struct1() {
  my_structure_t s;
  s.a = 1;
  s.b = 2;
  return s;
}

my_structure_t *example_struct2() {
  my_structure_t *s = malloc(sizeof(my_structure_t));
  (*s).a = 1;
  s->b = 2;
  return s;
}

// objdump -d memory_test
// gcc -S memory_test.c
int main() {
  // example_stack1();
  // example_stack2();
  /*
  int c = 3;
  int d = 4;
  example_stack3(c, d);
  */

  // example_static1();

  // int* res = example_problem1();
  // printf("%i\n", res[0]);

  // int* res = example_dynamic3();
  // printf("%i\n", res[2]);
  // // free(res);
  // sizeof...

  // my_structure_t s;
  // s.a = 1;
  // s.b = 2;
  // printf("%i\n", s.a);
  // printf("%i\n", s.b);

  my_structure_t s = example_struct1();
  printf("%i\n", s.a);
  printf("%i\n", s.b);

  // my_structure_t* s = example_struct2();
  // printf("%i\n", (*s).a);
  // printf("%i\n", s->b);

  return 0;
}
