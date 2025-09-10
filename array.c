#include <stdio.h>
int main()
{
int arr[20];
int i,n,sum;
double avg=0.0;
printf("Enter the number of term :");
scanf("%d",&n);
for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
avg = sum/n; 
printf("%d\n",sum);
printf("%.2lf",avg); 
}
