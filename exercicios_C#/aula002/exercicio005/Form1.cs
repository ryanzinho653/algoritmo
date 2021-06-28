using System;
using System.Windows.Forms;

namespace exercicio005
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            string output = "";
            int count;

            for(count = 1; count <= 10; count++)
            {
                if(count == 5)
                    break;
                output += count + "";
            }
        output += "\nsaiu do loop de contagem = "+count;

        MessageBox.Show(output,"demostramos a instrucao break", MessageBoxButtons.OK,MessageBoxIcon.Information); 
        }

    }
}
