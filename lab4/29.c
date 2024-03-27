//to read name of N student and display
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	char st[20][100];
	printf("Enter the names:\n");
	for(i=0;i<n;i++)
	{
		printf("Student %d: ",i+1);
		scanf("%s",st[i]);
		
	}
	for(i=0;i<n;i++)
		printf("%s\n",st[i]);
}
