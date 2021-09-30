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
            string sexo = Convert.ToString(textBox2.Text);
            string estadoCivil = Convert.ToString(textBox3.Text);

            if(sexo == "F" && estadoCivil == "Casada")
            {
                /*eu nao sei como fazer o resto !!!!
                 no caso a logica do programa e facil mais eu nao sei como faz para aparecer a caixa de dialogo ao apertar o button :( */
            }
        }

    }
}