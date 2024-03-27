//to read n no. and find sum of odd no. in array
#include <stdio.h>
int main() 
{
    int n,sum=0,i;
    printf("Enter no. of items: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
	{
        printf("No. %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) 
        if(a[i]%2!=0)
            sum+=a[i];
    printf("Sum of odd = %d",sum);
}
