

public class array3 
{
 public static void main(String[] args)
 {
    int arr [][]= new int[2][3];
    arr[0][0]=10;
    arr[0][1]=20;
    arr[1][1]=30; 
 
  for(int i=0;i<arr.length;i++)
  {
      for(int j=0;j<arr[i].length;j++)
      {
          System.out.println(arr[i][j]);
      }
  }
 }
}

