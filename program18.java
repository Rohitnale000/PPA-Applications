import java.lang.*;
class program18
{
	static 
	{
		System.out.println("inside static method");
	}
	{
		System.out.println("inside unnamed");
	}
	public void test1()
	{
		System.out.println("inside non-static");
	}
	public static void main(String[] args) 
	{
		System.out.println("Har Har Mahadev.....!!");
		program18 obj=new program18();
		obj.test1();
		
	}
}