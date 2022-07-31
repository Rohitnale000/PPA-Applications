import java.lang.*;

class employee implements Cloneable
{
    public int EID;
    public String ENAME;
    public int ESAL;

public employee(int id,String name,int no)
{
    this.EID=id;
    this.ENAME = name;
    this.ESAL = no;
}

public Object clone() throws CloneNotSupportedException
{
    return super.clone();
}

}

public class copy 
{
    public static void main(String[] args) throws Exception
     {
       employee eobj = new employee(10, "Rohit", 250000);
       System.out.println("Eid:" +eobj.EID+" "+"Ename:" +eobj.ENAME+" "+ "Salary:" + eobj.ESAL); 
       employee eobjx = (employee) eobj.clone(); 
       System.out.println("Eid:" +eobjx.EID+"" +" Ename:" +eobjx.ENAME+" "+ "Salary:" + eobjx.ESAL);
       eobj.ENAME ="Madhuri";
       System.out.println("Eid:" +eobjx.EID+"" +" Ename:" +eobjx.ENAME+" "+ "Salary:" + eobjx.ESAL);
    }
}
