//Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e 
//escrever o maior deles.

using System;

namespace exercicio023
{
    class Program
    {
        static void Main(string[] args)
        {
            int valor1, valor2;

            Console.Write("informe o primeiro valor: ");
            valor1 = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme o segundo numero: ");
            valor2 = Int32.Parse(Console.ReadLine());

            if(valor1 > valor2)
            {
                Console.WriteLine("\nO valor {0} e maior que {1}", valor1, valor2);
            }else
            {
                Console.WriteLine("\nO valor {0} e maior que {1}", valor2, valor1);
            }
        }
    }
}
