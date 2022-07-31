import java.lang.*;
class demo
{
    public int arr[];
    public demo(int size)
    {
        System.out.println("allocating resources");
        this.arr = new int [size];
    }
    protected void finalize()
    {
        System.out.println("Deallocating resources");
        this.arr=null;
    }

}
public class Gc 
{
    public static void main(String[] args)
    {
        demo obj = new demo(10);
        obj = null;
        System.gc();
        System.out.println("end of main");
    }
}
