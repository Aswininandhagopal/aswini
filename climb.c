#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3;
scanf("%d",&m1);
m3=m1;
if(m1%2!=0)
{
m1--;
}
m2=m1/2;
if(m3%2!=0)
m2++;
printf("%d",m2);
getch();
}
