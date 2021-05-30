//crie um programa que imprima na tela os últimos 100 anos

using System;

namespace exercicio001
{
    class Program
    {
        static void Main(string[] args)
        {
            int contador = 101, resu = 2021;

            while(contador >= 1)
            {
                contador = contador - 1;
                resu = resu - 1;
                Console.WriteLine(resu);
            }
        }
    }
}
