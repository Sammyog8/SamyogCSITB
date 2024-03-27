//to convert string into upper case without using function
#include <stdio.h>
int main() 
{
    char s[100];
    int i,j;
    printf("Enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
    printf("%s\n",s);
}
