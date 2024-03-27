//to read line of text and count number of vowels, consonant, digits, white spaces and other characters.
#include<stdio.h>
int main()
{
	char s[80];
	int i,vo=0,co=0,di=0,sp=0,ot=0;
	printf("enter line: ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
				vo++;
			else 
				co++;
		else if(s[i]>='0'&&s[i]<='9')
			di++;
		else if(s[i]==' ')
			sp++;
		else
			ot++;
	}
	printf("Vowel = %d\nConsonent = %d\nDigit = %d\nSpace = %d\nOthers = %d",vo,co,di,sp,ot);
}//Hi, I live in Dhapashi-7, about 40 minutes from here.
