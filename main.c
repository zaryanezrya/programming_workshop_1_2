#include "add.h"
#include <stdio.h>
#include <assert.h>

void test_add_1() {
    // Arrange
    int a = 10;
    int b = 100;

    // Act
    int res = add_int(a, b);

    // Assert
    assert(res == 110);
}

void test_add_2() {
  // Arrange
  int a = 42;
  int b = 100;

  // Act
  int res = add_int(a, b);

  // Assert
  assert(res == 142);
}

int main() {
  test_add_1();
  test_add_2();

  return 0;
}