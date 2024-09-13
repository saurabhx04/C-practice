#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%lu \n", numStudents * sizeof(*students));
    printf("%s %lu \n", "two" , sizeof(students));
    printf("%s %lu \n", "three"  , sizeof(*students));
    return 0;
}