//Faça um programa que percorra todos os número de 1 até 100. Para os números múltiplos de 4, 
//imprima a palavra “M4”, e para os outros, imprima o próprio número

using System;

namespace exercicio003
{
    class Program
    {
        static void Main(string[] args)
        {
            int contador = 0;

            while(contador <= 100)
            {
                contador = contador + 1;

                if(contador % 4 == 0)
                {
                    Console.WriteLine("M4");
                }else
                {
                    Console.WriteLine(contador);
                }
            }
        }
    }
}
