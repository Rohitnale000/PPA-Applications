import java.lang.*;

class marvellous implements Runnable
{
    public void run()
    {
        System.out.println("inside thread"+ Thread.currentThread().getName());
    }
}

public class mythread3
{
     public static void main(String[] args) 
     {
         marvellous obj = new marvellous();
        Thread t1 = new Thread(obj,"First");

        marvellous obj2 = new marvellous();
        Thread t2 = new Thread(obj2,"Secound");
        t1.start();
        t2.start();
     }  
}
