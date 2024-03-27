//to read n items and sort them in ascending or descending upon user choice
#include <stdio.h>
int main() 
{
    int n,i,j,temp,ch;
    printf("Enter no. of items: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
	{
        printf("No. %d: ", i + 1);
        scanf("%d",&a[i]);
    }
    printf("Enter '1' for ascending and '2' for descending: ");
    scanf("%d",&ch);
    for(i=0;i<n-1;i++) 
	{
        for(j=0;j<n-i-1;j++) 
		{
            if((ch==1 && a[j]>a[j+1])||(ch==2 && a[j]<a[j+1]))
			{
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if (ch==1)
        printf("Sorted items in ascending order:\n");
    else if (ch==2)
        printf("Sorted items in descending order:\n");
    for (i=0;i<n;i++) 
        printf("%d ",a[i]);
}
