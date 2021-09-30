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
            double a = Convert.ToDouble(textBox1.Text);
            double b = Convert.ToDouble(textBox2.Text);
            double IMC;

            IMC = a / (b * b);

            if(IMC < 18.5)
            {
                MessageBox.Show("Voce esta abaixo do peso ideal");
            }else if(IMC >= 18.5 || IMC <= 25)
            {
                MessageBox.Show("Voce esta com o peso OK");
            }else if(IMC > 25 || IMC <= 30)
            {
                MessageBox.Show("Voce esta acima do peso ideal");
            }else if(IMC > 30)
            {
                MessageBox.Show("Voce esta obeso");
            }
        }
    }
}
