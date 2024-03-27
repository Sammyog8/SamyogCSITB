//to find reverse of string
#include<stdio.h>
int main()
{
	char s[50],temp;
	int i,l;
	printf("Enter string: ");
	gets(s);
	l=0;
	while(s[l]!='\0')
		l++;
	for(i=0;i<l/2;i++)
	{
		temp=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=temp;
	}
	printf("%s",s);
}
