import java.util.*;

public class array2
 {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number :");
        int size = sc.nextInt();
        
        int arr[] = new int[size];
        System.out.println("Enter elements of array is:");

        for(int i=0;i<arr.length;i++)
        {
            arr[i]= sc.nextInt();
            
        }
        System.out.println("entered elements are:\n");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
        sc.close();
    
    }
}
