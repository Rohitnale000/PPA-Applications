import java.util.*;

class exception2 
{
    public static void main(String[] args) 
    {
        int iNo1 =0,iNo2=0,iAns=0;
       Scanner sobj = new Scanner(System.in);
       System.out.print("enter first number:");
       iNo1 = sobj.nextInt(); 

       System.out.print("enter secound number:");
        iNo2 = sobj.nextInt(); 
        try
         {
            iAns = iNo1/iNo2;
         } 
        catch (ArithmeticException e)
        { 
            System.out.println(e);
        }
       
       System.out.print("Division is:"+iAns);
       System.out.print("\n");
       sobj.close();
    }    
}
