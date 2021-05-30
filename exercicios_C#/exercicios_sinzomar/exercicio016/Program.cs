//Escreva um programa para ler 3 valores inteiros e escrever o maior deles

using System;

namespace exercicio016
{
    class Program
    {
        static void Main(string[] args)
        {
            int valor1, valor2, valor3;
            Console.WriteLine("Informe tres valores");
            Console.Write("Infome o primeiro valor: ");
            valor1 = Int32.Parse(Console.ReadLine());
            Console.Write("\nInforme o segunfo valor: ");
            valor2 = Int32.Parse(Console.ReadLine());
            Console.Write("\nInforme o terceiro valor: ");
            valor3 = Int32.Parse(Console.ReadLine());

            if(valor1 > valor2 && valor1 > valor3)
            {
                Console.WriteLine("\nO maio valor e: ",+valor1);
            }else if(valor2 > valor1 && valor2 > valor3)
            {
                Console.WriteLine("O maio valor e: ",+valor2);
            }else if(valor3 > valor1 && valor3 > valor2)
            {
                Console.WriteLine("O maio valor e: ",+valor3);
            }
        }
    }
}
