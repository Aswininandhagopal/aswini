import.java.util.*;
class Armstrong
{
public static void main(String args[])
{
scanner in=newScanner(System.in);
System.out.println("enter the number to check if it is a armstrong number");
n=in.nextInt();
temp=n;
while(temp!=0)
{
r=temp%10;
sum=sum+r*r*r;
temp=temp/10;
}
if(n==sum)
System.out.println("entered number is an armstrong");
else
System.out.println()"enterd number is not an armstrong");
}
}

































































