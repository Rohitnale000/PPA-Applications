import java.util.*;




class exception1 
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
       System.out.print("enter first number:");
       int iNo1 = sobj.nextInt(); 

       System.out.print("enter secound number:");
       int iNo2 = sobj.nextInt(); 

       int iAns = iNo1/iNo2;
       System.out.print("Division is:"+iAns);
       System.out.print("\n");
       sobj.close();
    }    
}
