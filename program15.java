import java.util.*;
class program15
{
	public static void main(String[] args) 
	{
		 int iNo;
		 System.out.println("enter char:\n");
		 Scanner sc = new Scanner(System.in);
		 iNo=sc.next().charAt(0);
		 char ch[]=new char[iNo];
		 for (int i=0;i<iNo ;i++ )
		  {
		 	ch[i]=sc.next().charAt(0);
		 }
	}
}