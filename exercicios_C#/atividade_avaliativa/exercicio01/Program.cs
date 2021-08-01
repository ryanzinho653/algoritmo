using System;

namespace exercicio01
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] teste = new int[10];
            int cont;
            for(cont = 0; cont < 10; cont++)
            {
                teste[cont] = cont;
                Console.WriteLine(teste[cont]);
            }
            cont--;
            for(int cont2 = cont;cont2 >= 0; cont2--)
            {
                Console.WriteLine(teste[cont2]);
            }

        }
    }
}
