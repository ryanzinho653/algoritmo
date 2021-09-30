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

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double altura = Convert.ToDouble(textBox1.Text);
            string sexo = Convert.ToString(textBox2.Text);
            double pesoIdea = 0;
            if(sexo == "f" || sexo == "F")
            {
                pesoIdea = (altura * 62.1)-44.7;
            }else if(sexo == "m" || sexo == "M")
            {
                pesoIdea = (altura * 72.7) - 58;
            }

            MessageBox.Show("O seu peso ideal e: "+Convert.ToString(pesoIdea));
        }
    }
}
