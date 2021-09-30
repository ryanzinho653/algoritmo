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

        private void button1_Click(object sender, EventArgs e)
        {
            int a = Convert.ToInt32(textBox1.Text);

            if(a % 2 != 0)
            {
                a = a + 5;
                MessageBox.Show("Variavel par: "+Convert.ToString(a));
            }
            else
            {
                a = a + 8;
                MessageBox.Show("Variavel impar: " + Convert.ToString(a));
            }

        }
    }
}
