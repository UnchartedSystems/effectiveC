#include <stdio.h>

void test(void);
void increment(void);

int main(void) {
  test();
  test();    // NOTE: x = 1 because static initializes once
  test();
  return 0;
}

void test() {
  static int x = 0;
  printf("x = %d\n", x);
  x = 1;
}
