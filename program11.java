import java.util.*;
class program11
{

	public static void main(String[] args)

	 {
		int iNo;
		int sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("emter number:");
		iNo=sc.nextInt();
		for (int i=1;i<=5 ;i++ )
		 {
			System.out.println(i);
			sum = sum+i;
		}
		System.out.println("sum is:"+sum);
	}
}