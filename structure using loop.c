#include <stdio.h>
#include <string.h>

struct student 
{
    int roll;
    char name[50];
    double marks;
};

int main() 
{
    int i, n;
    struct student student1[20];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &student1[i].roll);

        // Read name with spaces using scanf
        printf("Name: ");
        scanf(" %[^\n]", student1[i].name);

        printf("Marks: ");
        scanf("%lf", &student1[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) 
	{
        printf("Roll  : %d\n", student1[i].roll);
        printf("Name  : %s\n", student1[i].name);
        printf("Marks : %.2lf\n\n", student1[i].marks);
    }

    return 0;
}

