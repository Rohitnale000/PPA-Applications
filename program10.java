import java.util.*;
class program10
{
	public static void main(String[] args) 
	{
		int iNo;
		System.out.println("enter a number :");
		Scanner sc = new Scanner(System.in);
		iNo= sc.nextInt();
		
		for (int i = 0;i<=iNo ;i++)
		 {
			if (i%3==0 && i%7==0)
			 {
				System.out.println(i);
			}
		}
	}
}