import java.lang.*;

class demo
{
	public int i;
	public final int j=20;
	public final int k;

	public demo()
	{
		this.i=10;
		this.k=30;
	}
	public demo(int a,int b)
	{
		this.i=a;
		this.k=b;
	}

	public void fun()
	{
		i++;
		//j++;  NA
		//k++;	NA
	}

}

class Final
{
	public static void main(String[] args) 
	{
		demo obj1 = new demo();
		obj1.fun();
		System.out.println(obj1.i);//11
		System.out.println(obj1.j);//20
		System.out.println(obj1.k);//30
		demo obj2 = new demo(11,21);
		obj2.fun();
		System.out.println(obj2.i);//12
		System.out.println(obj2.j);//20
		System.out.println(obj2.k);//21
	}
}