import javax.swing.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{   
    public JFrame mainFrame;
    public JFrame b1,b2,b3,b4;
    public JTextArea t1,t2;
    public JLabel lobj;
    Integer no1,no2;

    public Calculator(int width, int height, String title)
    {
        mainframe = new JFrame(title);
        mainframe.setSize(width,height);

        b1 = new JButton("Add");
        b2 = new JButton("Sub");
        b3 = new JButton("Mult");
        b4 = new JButton("Div");

        b1.setBounds(10,280,80,40);
        b2.setBounds(100,280,80,40);
        b3.setBounds(190,280,80,40);
        b4.setBounds(290,280,80,40);

        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);

        mainFrame.add(b1);
        mainFrame.add(b2);
        mainFrame.add(b3);
        mainFrame.add(b4);

        mainFrame.add(t1);
        mainFrame.add(t2);

        lobj = new JLabel(150,25,200,100);
        lobj.setVisible(true);

        mainframe.add(lobj);

        mainFrame.setLayout(null);
        mainframe.setVisible(true);
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent obj)
    {

    }
}

class MarvellousCalculator
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator(400,400,"Marvellous Calculator");
    }
}