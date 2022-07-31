import java.lang.*;
class base
{
	public int i;
	public int j;

	public base()
	{
		this.i=100;
		this.j=200;
	}
	public base(int q)
	{
		System.out.println("inside base constructor");
	}

	public void fun()
	{
		System.out.println("inside  base fun");
	}
}
class derived extends base
{
	public int x;
	public int y;

	public derived()
	{
		super(11);
	}

	public void sun()
	{
		
		super.fun();  //1

		System.out.println(super.i); //2
	}
}
class demo1
{
	public static void main(String[] args) 
	{
		derived obj = new derived();
		obj.sun();
	}
}