using System;
using System.Windows.Forms;

namespace aula002
{

    
    public partial class Form1 : Form
    {
        public Form1()
        {
            int sum = 0;

            for (int number = 2; number <= 100; number += 2)
                sum += number;
            
            MessageBox.Show("a soma e: " + sum, "soma pares inteiros de 2 a 100", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

    }
}
