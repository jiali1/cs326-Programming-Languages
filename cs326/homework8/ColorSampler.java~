import javax.swing.*;
import java.io.*; 
import java.awt.*; 
import java.awt.event.*; 
import javax.swing.event.*; 
import java.awt.Color.*;

public class ColorSampler extends JFrame
{
   protected JList<String> colorList;
   protected DrawingTester drawTest;
   protected JButton buttonSave;
   protected JButton buttonReset; 
   protected JButton rPlus;
   protected JButton rMinus; 
   protected JButton gPlus;
   protected JButton gMinus; 
   protected JButton bPlus;
   protected JButton bMinus;
   protected JTextField rValue;
   protected JTextField gValue; 
   protected JTextField bValue; 
   protected JLabel rLabel; 
   protected JLabel gLabel; 
   protected JLabel bLabel; 
   protected int rData[];
   protected int gData[];
   protected int bData[];
   protected String colorData[];
   protected int red; 
   protected int green; 
   protected int blue;
   protected int i = 1; 
   FileIO file; 

   public static void main (String argv[]) throws IOException
   {
      new ColorSampler("Color Sampler"); 
   }

   public ColorSampler(String title) throws IOException
   {
      super(title); 
      setBounds(10,10,360,368);
      addWindowListener(new WindowDestroyer());

      file = new FileIO(); 
      colorList = new JList<String>(); 
      colorData = new String[11];
      rData = new int[11]; 
      gData = new int[11]; 
      bData = new int[11];
      drawTest = new DrawingTester(); 
      drawTest.setBounds(10, 10, 100, 100);
      file.read(colorData, rData, gData, bData); 
      colorList.setListData(colorData);
      red = rData[0];
      green = gData[0];
      blue = bData[0];
      colorList.addListSelectionListener(new ListHandler()); 
      buttonSave = new JButton("Save");
      buttonSave.addActionListener(new ActionHandler());
      buttonReset = new JButton("Reset"); 
      buttonReset.addActionListener(new ActionHandler());
      rPlus = new JButton("+");
      rPlus.addActionListener(new ActionHandler());
      rMinus = new JButton("-"); 
      rMinus.addActionListener(new ActionHandler());
      gPlus = new JButton("+");
      gPlus.addActionListener(new ActionHandler());
      gMinus = new JButton("-"); 
      gMinus.addActionListener(new ActionHandler());
      bPlus = new JButton("+");;
      bPlus.addActionListener(new ActionHandler());
      bMinus = new JButton("-");
      bMinus.addActionListener(new ActionHandler());
      rValue = new JTextField(red + " ");
      gValue = new JTextField(green + " "); 
      bValue = new JTextField(blue + " "); 
      rLabel = new JLabel("Red: "); 
      gLabel = new JLabel("Green: "); 
      bLabel = new JLabel("Blue: ");

      getContentPane().setLayout(null);
      getContentPane().add(drawTest);
      getContentPane().add(rLabel);
      getContentPane().add(rValue); 
      getContentPane().add(rPlus);
      getContentPane().add(rMinus);
      getContentPane().add(gLabel);
      getContentPane().add(gValue); 
      getContentPane().add(gPlus);
      getContentPane().add(gMinus);
      getContentPane().add(bLabel);
      getContentPane().add(bValue); 
      getContentPane().add(bPlus);
      getContentPane().add(bMinus);
      getContentPane().add(buttonSave);
      getContentPane().add(buttonReset); 
      getContentPane().add(colorList); 


      buttonSave.setBounds(10,330,80,30);
      buttonReset.setBounds(100,330,80,30); 
      rPlus.setBounds(130,235,50,20);
      rMinus.setBounds(190,235,50,20); 
      gPlus.setBounds(130,265,50,20);
      gMinus.setBounds(190,265,50,20); 
      bPlus.setBounds(130,295,50,20);
      bMinus.setBounds(190,295,50,20);
      rValue.setBounds(70,235,50,20);
      gValue.setBounds(70,265,50,20); 
      bValue.setBounds(70,295,50,20);
      rLabel.setBounds(10,220,70,50); 
      gLabel.setBounds(10,250,70,50); 
      bLabel.setBounds(10,280,70,50);
      drawTest.setBounds(10,10,230,200);
      colorList.setBounds(250,10,100,200);

      setVisible(true);
   }
  
   private class ListHandler implements ListSelectionListener 
   {  
      public void valueChanged(ListSelectionEvent e)
      {
         if ( e.getSource() == colorList )
            if ( !e.getValueIsAdjusting() )
            {
	       i = colorList.getSelectedIndex();
	       red = rData[i];
               green = gData[i];
               blue = bData[i];
               rValue.setText(red + " ");
               gValue.setText(green + " "); 
               bValue.setText(blue + " ");
               drawTest.repaint();
               setTitle("Color Sampler");
            }
      }

   }
   
   private class DrawingTester extends JComponent
   {
      public void paint(Graphics g) 
      {
         Dimension d = getSize();
         Color color = new Color(red,green,blue);
         g.setColor(color);
         g.fillRect(1, 1, d.width-2, d.height-2);
         g.drawRect(1, 1, d.width-2, d.height-2);
      }
   }
   
   private class ActionHandler implements ActionListener 
   {   
      public void actionPerformed(ActionEvent e)
      {
         if ( e.getSource() == rPlus )
         {
	    red = red + 5;
            rValue.setText(red + " ");
            drawTest.repaint();  
            setTitle("Color Sampler*");  		
	 }
	 else if ( e.getSource() == rMinus )
         {
            red = red - 5;
            rValue.setText(red + " ");
            drawTest.repaint(); 
            setTitle("Color Sampler*");
         }
	 else if ( e.getSource() == gPlus )
         {
            green = green + 5;
            gValue.setText(green + " ");
            drawTest.repaint();
            setTitle("Color Sampler*"); 
         }	
         else if ( e.getSource() == gMinus )
         {
            green = green - 5;
            gValue.setText(green + " ");
            drawTest.repaint(); 
            setTitle("Color Sampler*");
         }
         else if ( e.getSource() == bPlus )
         {
            blue = blue + 5;
            bValue.setText(blue + " ");
            drawTest.repaint(); 
            setTitle("Color Sampler*");
         }	
         else if ( e.getSource() == bMinus )
         {
            blue = blue - 5;
            bValue.setText(blue + " ");
            drawTest.repaint();
            setTitle("Color Sampler*"); 
         }
         else if ( e.getSource() == buttonSave )
         {
            rData[i] = red; 
            gData[i] = green; 
            bData[i] = blue; 
            setTitle("Color Sampler");
         }
         else if ( e.getSource() == buttonReset )
         {
            red = rData[i];
            green = gData[i];
            blue = bData[i];
            rValue.setText(red + " "); 
            gValue.setText(green + " "); 
            bValue.setText(blue + " "); 
            drawTest.repaint();
            setTitle("Color Sampler");
         }		
      }
   }                        

   private class WindowDestroyer implements WindowListener
   {
      public void windowClosing(WindowEvent e) 
      {  
         try
         {
            file.write(colorData, rData, gData, bData);
         } catch( IOException except){}

         System.exit(0);  
      }
      public void windowActivated(WindowEvent e) {} 
      public void windowClosed(WindowEvent e) {} 
      public void windowDeactivated(WindowEvent e) {} 
      public void windowDeiconified(WindowEvent e) {} 
      public void windowIconified(WindowEvent e) {} 
      public void windowOpened(WindowEvent e) {} 
   } 

   class FileIO
   {
      public void read(String colorData[], int rData[], 
                             int gData[], int bData[]) throws IOException
      {
         FileInputStream stream = new FileInputStream("colors.txt");
         InputStreamReader reader = new InputStreamReader(stream); 
         StreamTokenizer tokens = new StreamTokenizer(reader);  
         int counter = 0; 

         while(tokens.nextToken() != tokens.TT_EOF)
         {
            colorData[counter] = (String) tokens.sval; 
            tokens.nextToken();
            rData[counter] = (int) tokens.nval; 
            tokens.nextToken(); 
            gData[counter] = (int) tokens.nval;
            tokens.nextToken();
            bData[counter] = (int) tokens.nval; 
       
            counter++;
         }

         stream.close();
      }

      public void write(String colorData[], int rData[], 
                             int gData[], int bData[]) throws IOException
      {
         FileOutputStream ostream = new FileOutputStream("colors.txt");
         PrintWriter writer = new PrintWriter(ostream);  
         int counter = 0; 

         while(counter < 11)
         {
            writer.println(colorData[counter] + " " + rData[counter] +
                        " " + gData[counter] + " " + bData[counter]);  
            counter++;
         }
       
         writer.flush();
         ostream.close();
      }
   }
}




