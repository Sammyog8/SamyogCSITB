//to read salary of n employees and count no of employee receiving salary between 40000 to 60000
#include <stdio.h>
int main() 
{
    int n,i,count=0;
    printf("Enter no. of employees: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
	{
        printf("Salary of employee %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    	if(a[i]>40000&&a[i]<60000)
    		count++;
	printf("No. of employee earing betn 40k and 60k = %d",count);
}
