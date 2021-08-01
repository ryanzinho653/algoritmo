using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Collections;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exercicio008
{
    public partial class Form1 : System.Windows.Forms.Form
    {   
        private System.Windows.Forms.Button calculateButton;
        private System.Windows.Forms.Label outputLabel;
        //[STAThread]
        public Form1()
        {
            Application.Run(new Form1());
        }
        int Square(int y)
        {
            return y*y;
        }
        private void calculateButton_Click(object sender, System.EventArgs e)
        {
            outputLabel.Text = "";
            for(int counter = 1; counter <= 10; counter++)
            {
                int result = Square(counter);
                outputLabel.Text += "The square of "+ counter + "is" + result + "\n";
            }
        }

    }
}
