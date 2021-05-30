/*Faça um programa em C# modo console que solicite a entrada de um valor via teclado e verifique 
se o valor é par e se é maior que 30: mostre a mensagem “Valor par maior que trinta”, senão 
verificar se é ímpar maior que trinta mostrar a mensagem: “Valor impar maior que trinta”, senão 
verificar se é par menor que trinta mostrar a mensagem: “Valor par menor que trinta”, senão 
mostrar a mensagem: “Valor impar menor que trinta”*/

using System;

namespace exercicio006
{
    class Program
    {
        static void Main(string[] args)
        {
            int valor;

            Console.Write("informe um valor inteiro: ");
            valor = Int32.Parse(Console.ReadLine());

            if(valor > 30)
            {
                Console.Write("\nO valor e maior que trinta ");
            }else
            {
                Console.Write("O valor e menor que trinta ");
            }
            if(valor % 2 == 0)
            {
                Console.WriteLine("e é par");
            }else
            {
                Console.WriteLine("e é impar");
            }
        }
    }
}
