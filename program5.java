import java.util.*;
class program5
{
	public static void main(String[] args) 
	{
		
       int iNo=0;
       Scanner sc = new Scanner(System.in);
       System.out.println("enter a number:");
       iNo= sc.nextInt();

       if (iNo>0)
        {
       	   if (iNo%2==0) 
       	   {
       	   	 System.out.println("even number");
       	   }
       	   else 
       	   {
       	   	System.out.println("odd Number");

       	   }
       }
       else
       {


       	 System.out.println("Number not Valid");
       }

	}


}