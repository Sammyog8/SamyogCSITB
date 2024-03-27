//frist n terms of fibonacci
#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,t;
	printf("Till what term? ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		t=a+b;
		a=b;
		b=t;
	}
}
