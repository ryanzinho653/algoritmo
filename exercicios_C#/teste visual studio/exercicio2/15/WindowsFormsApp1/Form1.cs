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
            string nome = Convert.ToString(textBox1.Text);
            int a = Convert.ToInt32(textBox2.Text);
            int b = Convert.ToInt32(textBox3.Text);
            int c = Convert.ToInt32(textBox4.Text);
            int d = Convert.ToInt32(textBox5.Text);
            int ee = Convert.ToInt32(textBox6.Text);
            int f = Convert.ToInt32(textBox7.Text);
            int g = Convert.ToInt32(textBox8.Text);
            int h = Convert.ToInt32(textBox9.Text);
            int i = Convert.ToInt32(textBox10.Text);
            int j = Convert.ToInt32(textBox11.Text);
            int resu = 0;

            a = a * 6;
            b = b * 8;
            c = c * 10;
            d = d * 12;
            ee = ee * 15;
            f = f * 2;
            g = g * 5;
            h = h * 3;
            i = i * 5;
            j = j * 8;

            resu = a + b + c + d + ee + f + g + h + i + j;

            MessageBox.Show("Cliente: " + nome + ".\n" + "Deve: " + Convert.ToString(resu));
        }
    }
}
