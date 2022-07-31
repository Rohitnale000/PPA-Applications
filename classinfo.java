import java.lang.*;
class demo
{

}
class classinfo
{
	public static void main(String[] args) 
	{
			
		demo obj = new demo();

		class cref = obj.getClass();

		System.out.println("class name of obj:"+ cref.getName());

	}

}