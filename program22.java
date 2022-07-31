import java.util.*;

class program22
{
	public static void main(String[] args) 
	{
	
		Scanner sc = new Scanner(System.in);

		System.out.println("enter String:");

		String s = sc.nextLine();

		String rev="";

		for (int i=s.length()-1;i>=0 ;i-- )

		 {
			
		 	 rev = rev + s.charAt(i);

		}
		
		System.out.println("Reversed String is:"+ rev);

		if (rev.equals(s))
		 {
			System.out.println("String is Palindrom");	
		}
		else
		{
			System.out.println("String is not Palindrom");
		}

	}
}