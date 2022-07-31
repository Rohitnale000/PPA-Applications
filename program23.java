
import java.util.*;
class program23
{
    public static void main(String[] args)
     {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter String:");
       String str1= sc.nextLine();

       String rev = "";

       for(int i=str1.length()-1;i>=0;i--)
       {
            rev = rev + str1.charAt(i);
       }
       System.out.println(rev);

       if (rev.equals(str1))
        {
            System.out.println("String Is Panlindrom");
        }
        else
        {
            System.out.println("String is Not Panilndrom");
        }

    }
}