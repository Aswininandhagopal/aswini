import java.util.Scanner;
public class Factorial
{
public static void main(String args[])
{
int fact=1;
int numb=0;
System.out.println("enter a number");
Scanner in=new Scanner(System.in);
num=in.nextInt();
for(int i=1;i<=numb;i++)
{
fact=i*fact;
}
System.out.println("The factorial of "num+"is" +fact);
}
}
