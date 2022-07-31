import java.util.*;
class first
{

	public static void main(String[] args) 
	{
		
		System.out.println("After Remove ALL element in arraylist :"+al);

		ArrayList<Integer> al=new ArrayList<>();//object creation of Array List
		
		al.add(100);
		al.add(200);
		al.add(300);
		al.add(400);

		System.out.println("arraylist :"+al);

		al.add(3,500);

		System.out.println("After add element in arraylist :"+al);

		al.remove(4);

		System.out.println("After Remove element in arraylist :"+al);


		int no =al.get(0);

		
		System.out.println("To get First  element in arraylist :"+no);


		 int n =al.get(al.size()-1);


		System.out.println("To get Last element in arraylist :"+ n);


		al.clear();

		System.out.println("After Remove ALL element in arraylist :"+al);

		


		for (int i=1;i<=5 ;i++) 
		{
			
			al.add(i);
		}


		System.out.println("new list is:"+al);
    }


	
}
