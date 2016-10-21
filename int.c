#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("enter a number to reverse\n");
gets(a);
strrev(a);
printf("Reverse of enteres number is\n%s\n",a);
return 0;
}
