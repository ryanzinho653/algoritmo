//Escreva um programa para ler 2 e escrever o maior deles, ou se são iguais

using System;

namespace exercicio008
{
    class Program
    {
        static void Main(string[] args)
        {
            int valor1, valor2;

            Console.Write("Informe o primeiro valor: ");
            valor1 = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme o segundo valor: ");
            valor2 = Int32.Parse(Console.ReadLine());

            if(valor1 > valor2)
            {
                Console.WriteLine("\nO primeiro valor e maior que o segundo valor");
            }else if(valor1 < valor2)
            {
                Console.WriteLine("O segundo valor e maior que o primeiro valor");
            }else 
            {
                Console.WriteLine("Os valores sao iguais");
            }
        }
    }
}
