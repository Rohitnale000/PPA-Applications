import java.util.*;
class program4{

	public static void main(String[] args)
	 {
		
	 	Vector<Integer> vt= new Vector<>();

	 	vt.add(100);
	 	vt.add(200);
	 	vt.add(300);
	 	vt.add(400);
	 	vt.add(500);
	 	

	 	System.out.println("Vector list is: "+vt);

	 	vt.add(3,600);
	 	System.out.println("add some element in between:"+vt);

	 	int a=vt.capacity();
	 	System.out.println("The capacity of vector is:"+a);


	 	vt.clone();
	 	System.out.println("To copy as it is Vector :"+vt);


	 	int c=vt.size();
	 	System.out.println("Return the size of vector:"+c);


	 	System.out.println("it check the vector empty  or not :"+vt.isEmpty());

	}
}