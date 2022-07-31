import java.util.*;
class program8
{
	public static void main(String[] args) {
		int si,p,r,t;
		Scanner sc= new Scanner (System.in);
		System.out.println("enter principle:");
		p=sc.nextInt();
		System.out.println("enter rate:");
		r=sc.nextInt();
		System.out.println("enter time:");
		t=sc.nextInt();

		si=p*r*t;
		System.out.println("Simple interest is:"+si);
	}
}