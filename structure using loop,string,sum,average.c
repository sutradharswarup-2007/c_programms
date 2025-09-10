#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
   int m1,m2,m3,total;
};

int main() {
    int i, n;
    struct student student1[20];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &student1[i].roll);

        // Read name with spaces using scanf
        printf("Name: ");
        scanf(" %[^\n]",student1[i].name);
        
        printf("m1: ");
        scanf("%d",&student1[i].m1);
        
        printf("m2: ");
        scanf("%d",&student1[i].m2);
        
        printf("m3: ");
        scanf("%d",&student1[i].m3);
        
        student1[i].total=student1[i].m1+student1[i].m2+student1[i].m3;
       
        
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll  : %d\n", student1[i].roll);
        printf("Name  : %s\n", student1[i].name);
        printf("total : %d\n\n", student1[i].total);
        printf("Average : %d\n\n", (student1[i].total)/3);        
    }

    return 0;
}

