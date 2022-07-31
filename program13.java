class program13
{
	public static void main(String[] args) {
		int i=1;
		while(i<=4)
		{
			System.out.println(i);
			if(i==2)
			{
				System.out.println("$");
				i++;
				break;
			}

			System.out.println(i);
			i++;
		}
	}
}