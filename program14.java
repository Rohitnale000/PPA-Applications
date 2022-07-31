import java.util.*;
class program14
{
	public static void main(String[] args)
	 {
		int n;
		
		System.out.println("enter no of array you want:");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
	 	
	 	int arr[]=new int[n];

	 	System.out.println("enter arry elemts:");
	 	for (int i=0;i<n ;i++)
	 	 {
	 		arr[i]=sc.nextInt();
	 		
	 	}
	 	System.out.println("enterd elements are:");
	 	for (int i=0;i<n;i++) 
	 	{
	 		System.out.println(arr[i]);
	 	}
	 
	}

}