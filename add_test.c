#include "add.h"
#include <assert.h>
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

int main() {
  test_add_int_1();

  return 0;
}