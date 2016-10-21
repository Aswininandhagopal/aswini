#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("enter an integer");
gets(a);
strrev(a);
printf("reverse of an integer is \n%s\n",a);
return 0;
}
