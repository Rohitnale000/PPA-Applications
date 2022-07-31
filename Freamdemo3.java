import java.lang.*;
import java.nio.file.WatchEvent;
import java.awt.*;
import java.awt.event.*;

class marvellousFrame
{
	public Frame fobj;

	public marvellousFrame(String name)
	{

		fobj = new Frame(name);
		fobj.setSize(600,600);
		fobj.setVisible(true);

		fobj.addFocusListener(new marvellousLitsner());
	
	}	
}
class marvellousLitsner implements WindowListner
{

	public void windowDeactivated(WindowEvent obj){}
	public void windowActivated(WindowEvent obj){}
	public void windowDeiconified(WindowEvent obj){}
	public void windowIconified(WindowEvent obj){}

	

}
class Freamdemo3
{
	public static void main(String[] args) {
		

		System.out.println("print the data");

		marvellousFrame mobj = new marvellousFrame("PPA");

	}
}