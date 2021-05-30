//Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga 
//se ela poderá ou não votar este ano

using System;

namespace exercicio009
{
    class Program
    {
        static void Main(string[] args)
        {
            int datNasc, idade;
            Console.Write("informe o seu ano de nascimento: ");
            datNasc = Int32.Parse(Console.ReadLine());

            idade = 2021 - datNasc;

            Console.WriteLine("\nA sua idade e {0}", idade);

            if(idade >= 17)
            {
                Console.WriteLine("Voce tem idade para poder votar!!");
            }else
            {
                Console.WriteLine("Voce nao tem idade para poder votar!!");
            }
        }
    }
}
