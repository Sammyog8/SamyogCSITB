//to read age of 20 peoples and count the numbers of child teen adult young and old
#include<stdio.h>
int main()
{
	int i;
	int ch=0,te=0,ad=0,yo=0,ol=0;
	int a[20];
	printf("enter age of 20 persons: ");
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(i=0;i<20;i++)
	{
		if(a[i]<13)
			ch++;
		else if(a[i]<20)
			te++;
		else if(a[i]<31)
			ad++;
		else if(a[i]<55)
			yo++;
		else
			ol++;
	}
	printf("Child=%d\nTeen=%d\nAdult=%d\nYoung=%d\nOld=%d",ch,te,ad,yo,ol); 
}
