
import java.util.*;


class input
{
	public static void main(String[] args) 

	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("please Enter Your Name:");

		String name = sobj.nextLine();

		System.out.println("Enter Your Age");

		int iAge = sobj.nextInt();

		System.out.println("Enter Your Percentage");

		float iPer=sobj.nextFloat();

		System.out.println("your name is:"+ name);
		System.out.println("Age is:"+ iAge);
		System.out.println("Yoour Percentage is:"+ iPer);

		

	}
}