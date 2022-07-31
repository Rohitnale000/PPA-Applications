import java.lang.*;
class employee
{
    public String name;
    public int Salary;

    public employee(String str, int sal)
    {
        this.name = str;
        this. Salary = sal;
    }
    public String toString()
    {
        return"Employee name is" + name + "having Salary" + Salary;
    }
}

public class ObjString 
{
    public static void main(String[] args)
     {
        employee obj = new employee("Rohit",25000);
        System.out.println(obj.toString());
    }   
}
