
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int myNum;
char firstName[20];
char lastName[20];
int main(void) {

    printf("Enter your first name: \n");
    //scanf("%s \n", firstName);
    fgets(firstName, sizeof(firstName), stdin);
    printf("Enter your last name: \n");
    fgets(lastName, sizeof(lastName), stdin);
    printf("hello, %s%s \n", firstName, lastName);
    return 0;
}