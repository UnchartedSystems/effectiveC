#include <stdio.h>

void swap1(int, int);
void swap2(int*, int*);

int main(void) {
    int a = 21;
    int b = 17;

    swap1(a, b);
    swap2(&a, &b);

    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}

void swap1 (int x, int y) {
  int t = x;
  x = y;
  y = t;
  printf("swap: x = %d, y = %d\n", x, y);
}

void swap2 (int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
  return;
}
