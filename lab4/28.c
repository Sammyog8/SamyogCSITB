//to count numbers of words from line of text
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,l,count=1;
	printf("Enter grammatically correct line(Finish with .):: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
		if(s[i]==' ')
			count++;			
	printf("No. of words = %d",count);
}//Hi, I love you!
