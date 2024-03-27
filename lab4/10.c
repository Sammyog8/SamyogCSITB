//to read n no. in array and increment the elements by constant c
#include<stdio.h>
int main()
{
	int n,c,i;
	printf("How many elements? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("No. %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter constant value to add: ");
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		a[i]+=c;
		printf("%d ",a[i]);
	}
}
