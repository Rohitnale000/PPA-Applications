
class mythread1
{
	public static void main(String[] args) 
	{
		System.out.println("inside main");
		Thread tobj = Thread.currentThread();
		
		System.out.println("current thread name is:"+tobj.getName());
	}
}