#include<stdio.h>
int main()
{
char str[100];
scanf("%s",str);
int j=strlen(str)-1,i,len=0,k;
for(i=0;i<=j;i++)
{
if(str[i]!=str[j])
{
if(str[i]==str[j-1])
{
k=str[j];
len++;
}
else if(str[j]==str[i+1])
{
k=str[j];
len++;
}
else 
{
if(i+1==j-1)
{
len++;
}
k=str[j];
len++;
}
}
j--;
}
if(len==1)
{
printf("%c\n",k);
}
else if(len>1)
{
printf("cannot be converted\n");
}
else
{
printf("already a palindrome\n");
}
return 0;
}
