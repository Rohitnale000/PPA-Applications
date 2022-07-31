import java.lang.*;
class demo
{
	public int i;
	public int j;

	public demo()
	{
		this.i=10;
		this.j=21;
	}
	public demo(int x,int y)
	{
		this.i=x;
		this.j=y;
	}
	public static void fun()
	{
		System.out.println("inside fun");
	}
	public static void gun()
	{
		System.out.println("inside gun");
	}
}
class program19
{
	public static void main(String[] args) 
	{
		System.out.println("inside main");
		demo obj=new demo();
		obj.fun();
		obj.gun();
		System.out.println(obj.i);	
		demo obj1 = new demo(100,200);
		System.out.println(obj1.i);

	}
}