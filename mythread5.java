import java.lang.*;
import java.util.Scanner;
import java.util.*;
class marvellous
{
    public int arr[];
    public marvellous(int size)
    {
        arr = new int[size];
    }
    public void accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter number:");
        for(int i=0;i<this.arr.length;i++)
        {
            this.arr[i]=sobj.nextInt();
        }
    } 
    
    public void Display()
    {
        System.out.println("Data of array is:");
        for(int i=0;i<this.arr.length;i++)
        {
           System.out.println(this.arr[i]); 
        }

    }
   synchronized public void DisplayEven()
    {
        for(int i=0;i< this.arr.length;i++)
        {
            if(this.arr[i]%2==0)
            {
                System.out.println("Even number is:"+this.arr[i]);
            }
        }
    }
}
class demo extends Thread
{
    public marvellous mref;
    public demo(marvellous obj)
    {
        this.mref= obj;
    }
    
    
    public void run()
    {
        this.mref.DisplayEven();
    }


}
public class mythread5
{
   public static void main(String[] args)throws Exception
   {
       marvellous mobj1 = new marvellous(5);
       marvellous mobj2 = new marvellous(8);
       mobj1.accept();
       mobj1.Display();
       mobj2.accept();
       mobj2.Display();

       demo obj1 = new demo(mobj1);
       demo obj2 = new demo(mobj2);
       Thread t1 = new Thread(obj1);
       t1.start();
       Thread t2 = new Thread(obj2);
       t2.start();
       t1.join();
       t2.join();

       System.out.println("end of thread");
   } 
}
