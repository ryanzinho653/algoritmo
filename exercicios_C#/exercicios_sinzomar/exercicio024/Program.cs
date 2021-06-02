//Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga 
//se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu)

using System;

namespace exercicio024
{
    class Program
    {
        static void Main(string[] args)
        {
            int idade, ano, dataNasc;
            
            Console.Write("informe quantos anos voce tem: ");
            idade = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme em que ano estamos: ");
            ano = Int32.Parse(Console.ReadLine());

            dataNasc = ano - idade;

            Console.WriteLine("\nVoce nasceu em {0}", dataNasc);
        }
    }
}
