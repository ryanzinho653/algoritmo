//Faça um programa que percorra todos os número de 1 até 100. Para os números ímpares, deve ser 
//impresso um “*”, e para os números pares, deve ser impresso dois “**”

using System;

namespace exercicio002
{
    class Program
    {
        static void Main(string[] args)
        {
            int contador = 101;

            while(contador >= 1)
            {
                contador = contador - 1;
                
                if(contador % 2 == 0)
                {
                    Console.WriteLine("**");
                }else
                {
                    Console.WriteLine("*");
                }
            }
        }
    }
}
