#include <stdio.h> 
int main() 
{ 
    int arr[20],frr[100];
    int i,n; 
    
	printf("Enter the numbers of element :"); 
    scanf("%d",&n); 
    
   for (i=0;i<n;i++) 
   {
      printf("Enter the numbers :\n");
	  scanf("%d",&arr[i]); 
      frr[arr[i]]++; 
   } 
  
   for(i=0;i<100;i++)
   { 
     if(frr[i]==1) 
     printf("Unique elements are : %d \n",i); 
   }
   return 0;
}
