import java.lang.*;
class base
{
	public int i;
	public int j;

	public base()
	{
		System.out.println("inside base constructor");
	}
	public base(int n,int m)
	{
		this.i=n;
		this.j=m;
	}
	public void fun()
	{

		System.out.println("inside base fun");
	}

	public void fun(int x)
	{
		System.out.println("inside base fun with int args");
	}

	public void gun()
	{
		this.i=11;
		this.j=21;
		System.out.println("inside base gun");
	}
}
class derived extends base
{
	public int x;
	public int y;

	public derived()
	{
		super(100,200);
		System.out.println("inside derived constructor");
		System.out.println(super.i); 
	}

	public void sun()
	{
		System.out.println("inside sun");
		super.gun();
		System.out.println(super.i); 
	}
}
class inheritace
{
	public static void main(String[] args) 
	{
		derived obj = new derived();
		
		obj.sun();
	
		
	}
}