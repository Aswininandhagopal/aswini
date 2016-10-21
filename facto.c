import java.util.Scanner;
public class Factorial
{
public static void main(String args[])
{
int factorial=1;
int number=0;
System.out.println("enter a number");
Scanner in=new Scanner(System.in);
num=in.nextInt();
for(int i=1;i<=number;i++)
{
factorial=i*factorial;
}
System.out.println("The factorial of "num+"is" +factorial);
}
}
