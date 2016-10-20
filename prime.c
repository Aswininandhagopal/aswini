#include<stdio.h>
int main()
{
int a,b,i,flag=0,k;
printf("enter the starting and ending interval");
scanf("%d%d",&a,&b);
for(i=a:i<=b;i++)
{
for(k=2;k<i;k++)
{
if(i%k==0)
{
flag=1;
}
}
if(flag==0)
printf("%d",&i);
}
printf("the above is prime number series");
return 0;
}
