//to check whether a word is palindrome using function
#include<stdio.h>
#include<string.h>
int main()
{
	char s[80],r[80];
	printf("Enter a word: ");
	scanf("%s",s);
	strcpy(r,s);
	strrev(r);
	if(strcmp(r,s)==0)
		printf("%s is palindrome",s);
	else
		printf("%s is not palindrome",s);
}
