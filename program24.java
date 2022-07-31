import java.util.*;

class demo
{

    void Display(int iNo1,int iNo2)
    {
        int i=0;
        int j=0;
        for (i = iNo1; i>=0; i--)
             {

        for (j = 1; j <= iNo2; j++)
        {

            if (i==j)
            {
                System.out.print("#\t");
            }
            else
            {
                System.out.print("*\t");
            }

        }

        System.out.println("");
    }


    }
    
}

public class program24 
{
    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);
        System.out.println("enter Row no:");
        int iRow = sc.nextInt();
        System.out.println("enter column no:");
        int iCol = sc.nextInt();
        
        demo dobj = new demo();
        dobj.Display(iRow,iCol);

    }    
}
