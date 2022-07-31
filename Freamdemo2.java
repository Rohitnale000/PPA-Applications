import java.lang.*;
import java.awt.*;

class marvellousFrame
{
	public Frame fobj;

	public marvellousFrame(String name)
	{

		fobj = new Frame(name);
		fobj.setSize(600,600);
		fobj.setVisible(true);
	
	}	
}

class Freamdemo2
{
	public static void main(String[] args) {
		

		System.out.println("print the data");

		marvellousFrame mobj = new marvellousFrame("PPA");

	}
}