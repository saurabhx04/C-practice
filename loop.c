#include <stdio.h>
#include <stdbool.h>    

int main(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}