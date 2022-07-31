import java.util.*;
class program2
{

	public static void main(String[] args) 
	{
		LinkedList<String> lk=new LinkedList<>();

		lk.add("Rohit");
		lk.add("Prajwal");
		lk.add("abhijit");
		lk.add("Nilesh");

		System.out.println("Whole LinkedList:"+lk);


		lk.remove(1);

		System.out.println("remove first element in LinkedList:"+lk);


		lk.add(1,"Kiran");

		System.out.println("Add new element in LinkedList:"+lk);


		String str =lk.getFirst();

		System.out.println("To get First element in LinkedList:"+str);


		String str1=lk.getLast();

		System.out.println("To get First element in LinkedList:"+str1);


        int no =lk.indexOf("Nilesh");//we use both lastIndexOf() or indexOf

        System.out.println("To find index wise elements:"+no);

        

        lk.offer("Nale");

        System.out.println("To remove the First elements arraylist is:"+lk);
;


		for (int i=0;i<10;i++) {


			System.out.println("list is:"+lk);
			
		}

	}
}