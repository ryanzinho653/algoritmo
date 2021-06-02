/*Faça um programa em C# modo console que solicite a idade, altura e peso de uma criança que 
deseja entrar em um brinquedo no parque de diversões, se criança for maior ou igual a 5 anos e 
menor que 10 anos, com peso menor igual a 50 kg ou altura menor igual a 1,20 mostrar a mensagem 
“Criança liberada”, senão mostrar a mensagem “Criança não liberada”.*/

using System;

namespace exercicio022
{
    class Program
    {
        static void Main(string[] args)
        {
            int idade;
            double altura, peso;
            
            Console.Write("Informe sua idade: ");
            idade = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme sua altura: ");
            altura = double.Parse(Console.ReadLine());

            Console.Write("\nInforme seu peso: ");
            peso = double.Parse(Console.ReadLine());

            if(idade >= 5 && idade < 10 && peso == 50 || altura == 1.20)
            {
                Console.WriteLine("\n\"Crianca liberada\"");
            }else
            {
                Console.WriteLine("\"Crianca nao liberada\"");
            }
        }
    }
}
