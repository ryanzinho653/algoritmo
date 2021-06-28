// exercicio tirado do livro como programar em C#
// usando a instrucao continue em uma estrutura for

using System;
using System.Windows.Forms;

namespace exercicio006
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            string output = "";
            for (int count = 1; count <= 10; count++)
            {
                if (count == 5)
                    continue;
                
                output += count + " ";
            }
        output += "\nusando continue para pular a impressao 5";
        MessageBox.Show(output, "demostrando a estrutura continue", MessageBoxButtons.OK,MessageBoxIcon.Information);
        }

    }
}
