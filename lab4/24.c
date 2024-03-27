// to check whether a word is palindrome or not
#include<stdio.h>
int main()
{
	char s[50],temp;
	int i,l=0;
	printf("Enter word: ");
	scanf("%s",s);
	while(s[l]!='\0')
		l++;
	for(i=0;i<l/2;i++)
		if(s[i]!=s[l-1-i])
			break;
	if(i<l/2)
		printf("%s is not palindrome",s);
	else
		printf("%s is palindrome",s);
}
