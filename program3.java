import java.util.*;
class program3
{
	public static void main(String[] args) 
	{
		
		Stack<Integer>st=new Stack<>();
		st.push(100);
		st.push(200);
		st.push(300);
		st.push(400);

		System.out.println("Stack element:"+st);


		st.pop();//delete the last element

		System.out.println("delete the last element:"+st);


		int a=st.peek();//return Last Element

		System.out.println("Return the last element of Stack: "+a +st);


		boolean b = st.empty();//return either TRUE OR FALSE

		System.out.println("is the stack is empty:"+b);


		st.add(2,500);
		System.out.println("Add new element using index"+st);


		int c=st.search();//return the index position
		System.out.println("searching element is :"+c);

		
	}





}