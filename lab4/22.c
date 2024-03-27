//to copy string 
#include<stdio.h>
int main()
{
	char s[80],c[80];
	int i;
	printf("Enter line: ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
		c[i]=s[i];
	c[i]='\0';
	printf("%s\n%s",s,c);
}
