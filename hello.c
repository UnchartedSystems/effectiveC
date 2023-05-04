#include <stdio.h>
#include <stdlib.h>

int main(void) {
  if (puts("Hello, world!")) {
  return EXIT_FAILURE;
  }
  printf("%s\n", "Success!"); // %s -> second arg (string literal)
  return EXIT_SUCCESS;
}
