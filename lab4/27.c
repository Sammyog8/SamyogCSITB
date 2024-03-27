//to remove all space from a line of text
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,l;
	printf("Enter a line: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
		if(s[i]==' ')
		{
			for(j=i;j<l;j++)
				s[j]=s[j+1];
			l--;
		}			
	printf("%s",s);
}
