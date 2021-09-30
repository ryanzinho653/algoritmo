using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = Convert.ToInt32(textBox1.Text);
            int b = Convert.ToInt32(textBox2.Text);
            int c = Convert.ToInt32(textBox3.Text);
            int d = 0;
            int ee = 0;
            int f = 0;

            if(a > b && a > c)
            {
                d = a;
            }else if(b > a && b > c)
            {
                d = b;
            }else if(c > a && c > b)
            {
                d = c;
            }
            if(a < b && a > c)
            {
                ee = a;
            }else if(a > b && a < c)
            {
                ee = a;
            }else if(b > a && b < c)
            {
                ee = b;
            }else if(b < a && b > c)
            {
                ee = b;
            }else if(c < a && c > b)
            {
                ee = c;
            }else if(c > a && c < b)
            {
                ee = c;
            }

            if(a < b && a < c)
            {
                f = a;
            }else if(b < a && b < c)
            {
                f = b;
            }else if(c < a && c < b)
            {
                f = c;
            }

            MessageBox.Show(Convert.ToString(d) + Convert.ToString(ee) + Convert.ToString(f));
        }
    }
}
