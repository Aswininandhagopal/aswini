#include<stdio.h>
#include<string.h>
int main()
{
char s[100],s1[100];
printf("Enter the string\n");
gets(s);
strcpy(s1,s);
strrev(s1);
if(strcmp(s,s1)==0)
printf("enter the string is a palindrome\n");
else
printf("entered string is not a palindrome\n");
return 0;
}
