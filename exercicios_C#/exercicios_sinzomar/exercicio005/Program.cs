//Crie um programa que receba 10 valores do usuário e ao final exiba a média aritmética dos números dados

using System;

namespace exercicio005
{
    class Program
    {
        static void Main(string[] args)
        {
            int contador = 0, valor, resu = 0;
            double media;

            while(contador <= 9)
            {
                contador = contador + 1;
                
                Console.Write("informe um valor: ");
                valor = Int32.Parse(Console.ReadLine());

                resu = resu + valor;
            }
            media = (double) resu/contador;
            Console.Write("\n o resultado da media aritmetica dos 10 valores foi {0}", media);
        }
    }
}
