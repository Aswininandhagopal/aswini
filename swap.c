#include<stdio.h>
int main()
int a,b,temp;
printf("enter the value a and b\n");
scanf("%d%d",&a,&b);
printf("Before swapping\na=%d\nb=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping\na=%d\nb=%d\n",a,b);
return 0;
}
