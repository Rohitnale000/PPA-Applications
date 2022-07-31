import java.lang.*;
class demo
{
	
	public final void fun()
	{
		System.out.println("inside fun");
	}
	public void gun()
	{
		System.out.println("inside gun");
	}
}
class derived extends demo
{
	public void gun()
	{
		System.out.println("inside derived gun");
	}
/*	public void fun()
	{
		System.out.println("inside derived fun");
	}*/
}
class Final1
{
	public static void main(String[] args) 
	{
		derived obj = new derived();
		obj.gun();
		obj.fun();
		
	}
}