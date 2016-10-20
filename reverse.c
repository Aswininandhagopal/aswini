#include<stdio.h>
#include<string.h>
int main()
{
char arr[100];
printf("enter a number to reverse\n");
gets(arr);
strrev(arr);
printf("Reverse of enteres number is\n%s\n",arr);
return 0;
}
