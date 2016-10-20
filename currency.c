#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int amount,count=0,a=0,b=0,c=0,l=0,m=0,n=0;
char s[100];
while(amount>=10)
{
if(amount>=1000)
{
a=amount/1000;
amount=amount%1000;
}
else if(amount>=500)
{
b=amount/500;
amount=amount%500;
}
else if(amount>=100)
{
c=amount/100;
amount=amount%100;
}
else if(amount>=50)
{
l=amount/50;
amount=amount%50;
}
else if(amount>=10)
{
m=amount/10;
amount=amount%10;
}
}
if(amount>0)
{
n=amount%10;
}
count=a+b+c+l+m+n;
printf("\n%d\n",count);
getch();
return 0;
}
