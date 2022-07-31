import java.util.*;
import java.lang.*;


public class array1
 {
    public static void main(String[] args) 
    {
        int iCnt=0;
        int arr[] = new int [5];
        arr[0]=10;
        arr[1]=20;
        arr[2]=30;
        arr[3]=40;
        arr[4]=50;

        System.out.println("size of array is :" + arr.length);
       

        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
        
        System.out.println("\n");

        while(iCnt<arr.length)
        {
            System.out.println(arr[iCnt]);
            iCnt++;
        }
    }    
}
