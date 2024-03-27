//reverse a string
#include<stdio.h>
void reverse(char []);
int main()
{
	char s[80];
	printf("Enter a string: ");
	gets(s);
	reverse(s);
}
void reverse(char s[])
{
	int i,l=0;
	char t;
	while(s[l]!=0)
		l++;
	for(i=0;i<l/2;i++)
	{
		t=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=t;
	}
	printf("Reversed: %s",s);
}
