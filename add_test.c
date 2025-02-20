#include "add.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

// AAA
void test_add_int_1() {
  // Arrange
  int a = 10;
  int b = 110;

  // Act
  int res = add_int(a, b);

  // Assert
  assert(120 == res);
}

void test_add_double_1() {
  double a = 0.1;
  double b = 0.1;

  double res = add_double(a, b);

  assert(res == 0.2);
}

void test_add_double_2() {
  double a = 0.1;
  double b = 0.2;

  double res = add_double(a, b);

  // |res - 0.3| < eps
  assert(fabs(res - 0.3) < 10E-7);
}

int main() {
  test_add_int_1();
  test_add_double_1();
  test_add_double_2();

  return 0;
}