#include <stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[15];
	double marks;
};
int main()
{
    struct student student1;
    student1.roll=1;
    strcpy(student1.name, "Raja Das");
    student1.marks=85;
    
    printf("Roll  : %d\n",student1.roll);
    printf("Name  : %s\n",student1.name);
    printf("Marks : %2.lf\n",student1.marks);
    
    return 0;
}
