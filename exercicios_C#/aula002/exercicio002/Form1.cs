// exercicio do livro como programar em C#
// calculando juros compostos

using System;
using System.Windows.Forms;

namespace exercicio002
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            decimal amount, principal = (decimal) 1000.00;
            double rate = .05;
            string output;

            output = "Ano\tMntante em deposito\n";

            for(int year = 1; year <= 10; year++)
            {
                amount = principal * (decimal) Math.Pow (1.0 + rate, year);
                
                output += year + "\t"+string.Format("{0:C}", amount) + "\n";
            }
            
            MessageBox.Show(output, "Juros compostos", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

    }
}
