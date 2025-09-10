#include <stdio.h>
#include <string.h>

union student {
    int roll;
    char name[15];
    double marks;
};

int main() {
    union student student1;

    // Example 1: Use roll
    student1.roll = 1;
    printf("Roll  : %d\n", student1.roll);

    // Example 2: Use name
    strcpy(student1.name, "Raja Das");
    

    // Example 3: Use marks
    student1.marks = 85;
    printf("Marks : %.2lf\n", student1.marks);
printf("Name  : %s\n", student1.name);
    return 0;
}

