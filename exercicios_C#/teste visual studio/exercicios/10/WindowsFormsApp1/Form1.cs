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
            int x = Convert.ToInt32(textBox1.Text);
            int y = Convert.ToInt32(textBox2.Text);
            int a = 0, b = 0, c = 0, d = 0, h = 0, f = 0;
            double g = 0;

            a = x + y;
            b = x - y;
            c = x / y;
            d = x * y;
            f = x * x;
            g = Math.Sqrt(y);
            h = x % y;

            MessageBox.Show("Soma: "+Convert.ToString(a)+"\nSubtracao: "+ Convert.ToString(b)+"\nDivisao: "+ Convert.ToString(c)+"\nMultiplicacao: "+ Convert.ToString(d)+"\nQuadrado: "+ Convert.ToString(f)+"\nRaiz Quadrada: "+Convert.ToString(g)+"\nResto de Divisao: "+ Convert.ToString(h));
        }
    }
}