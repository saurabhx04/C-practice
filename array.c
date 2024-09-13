#include <stdio.h>
#include <stdbool.h>    /* C99 standard header */   

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    printf("%d\n", sum);

    return 0;
}