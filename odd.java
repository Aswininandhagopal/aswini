import java.util.Scanner;
class OddOrEven
{
public static void main(String args[])
{
int n;
System.out.println("enter an integer to check if it is odd or even");
Scanner in=new Scanner(System.in);
n=in.nextInt();
if(n%2==0)
System.out.println("you entered an even number");
else
System.out.println("you entered an odd number");
}
}
