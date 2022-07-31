import java.lang.*;



public class command 
{
    public static void main(String[] args) 
    {
        System.out.println(args[0]);
        System.out.println(args[1]);

        int iAns=0;
        iAns = Integer.parseInt(args[0])+ Integer.parseInt(args[1]);
        System.out.println("Addition is :"+ iAns);

    }
}
