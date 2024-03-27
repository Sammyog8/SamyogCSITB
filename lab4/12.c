//to read n numbers and display only prime
#include <stdio.h>
int main() 
{
    int n,f,i,j;
    printf("Enter no. of items: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
	{
        printf("No. %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The prime no.s are: \n");
    for(i=0;i<n;i++)
    {
    	f=0;
    	for(j=1;j<=a[i];j++)
    		if(a[i]%j==0)
    			f++;
		if(f==2)
			printf("%d ",a[i]);
	}
}
