#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int *ptr1, *ptr2;
    ptr1 = malloc(sizeof(*ptr1));
    ptr2 = calloc(1, sizeof(*ptr2));

    printf("%d %d", *ptr1, *ptr2);

    return 0;
}