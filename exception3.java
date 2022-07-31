import java.util.*;

public class exception3 
{
    public static void main(String[] args) 
    {
        int arr[]={10,20,30,40,50};

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the index:");
        int index = sc.nextInt();
        try 
        {
            System.out.println("element at index is:"+arr[index]);
        } 
        catch (ArrayIndexOutOfBoundsException e)
        {
           System.out.println(e);
        }
        finally
        {
            sc.close();
        }
    }    
}
