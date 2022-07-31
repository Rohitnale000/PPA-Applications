import java.lang.*;
final class demo
{
	public void fun()
	{
		System.out.println("inside base fun");
	}
}
/*class derived extends demo   //NA
{
	public void fun()
	{
		System.out.println("inside derived fun");
	}
}*/
class Final3
{
	public static void main(String[] args) 
	{
		demo obj = new demo();
		obj.fun();
	}
}