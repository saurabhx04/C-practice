#include <stdio.h>
#include <stdbool.h>    /* C99 standard header */

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    printf("%lu", sizeof(array)/sizeof(array[0]));
    return 0;
}