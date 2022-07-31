import java.lang.*;

class marvellous implements Runnable
{
    public void run()
    {
       for(int i=0;i<10;i++)
       {
           System.out.println("inside run::"+i);
       }
       System.out.println("inside thread"+ Thread.currentThread().getName());
       try
       {
            
       }
       catch(Exception obj)
       {

       }

    }
}

public class mythread4
{
     public static void main(String[] args) throws Exception
     {
         marvellous obj = new marvellous();
        Thread t1 = new Thread(obj,"First");

        marvellous obj2 = new marvellous();
        Thread t2 = new Thread(obj2,"Secound");
        
        t1.start();
        t1.sleep(1000);
        t2.start();
     }  
}
