#include <assert.h>

#include "add.h"

void test_add_int_general() {
  int a = 10;
  int b = 32;
  int res = add_int(a, b);
  assert(res == 42);
}

void test_add_int_general2() {
  int a = 11;
  int b = 32;
  int res = add_int(a, b);
  assert(res == 43);
}

void test_add_double_general() {
  double a = 0.1;
  double b = 0.1;
  double res = add_double(a, b);
  assert(res == 0.2);
}

void test_add_double_general2() {
  double a = 0.1;
  double b = 0.2;
  double res = add_double(a, b);
  assert(res == 0.3);

  // |a - b| < eps
}

int main() {
  test_add_int_general();
  test_add_int_general2();
  test_add_double_general();
  test_add_double_general2();
  return 0;
}