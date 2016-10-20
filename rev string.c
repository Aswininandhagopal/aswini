#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
printf("Enter tha string to reverse\n");
gets(s);
strrev(s);
printf("Reverse of entered string is\n%s\n",s);
return 0;
}
