#include <stdio.h>
#include <stdbool.h>



_Bool flag1 = 0; // default keyword for booleans
bool  flag2 = false; // bool & false come from stdbool
                     // bool is just _Bool
                     // true & false are just int 1 & 0



int main(void) {
 //printf("%i,hello", false);
 unsigned long long int x = -1;
 printf("Short Int: %i\n", sizeof(short int));
 printf("Int: %i\n", sizeof(int));
 printf("Long Int: %i\n", sizeof(long int));
 printf("Long Int: %i\n", sizeof(long long int));
 printf("Long Long Int: %i\n", sizeof(x));
 return 0;
}
