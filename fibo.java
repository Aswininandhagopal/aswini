import java.io.*;
import java.lang.*;
class Fibonacci
{
public static void main(String args[])
{
if(args.length==1)
{
int n=Integer.parseInt(args[0]);
int i=0,j=1,k=0,a=0;
while(a<n)
{
System.out.print(k+"\t");
i=j;
j=k;
k=i+j;
a++;
}
}
else
{
System.out.println("you havent supplied the arguments : {usage : java fibonacci 34} to print the first 34 fibonacci numbers.");
}
}
}
