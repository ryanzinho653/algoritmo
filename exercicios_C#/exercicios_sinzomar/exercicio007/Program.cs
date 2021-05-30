/*Faça um programa em C# modo console que solicite a idade, altura e peso de uma criança que 
deseja entrar em um brinquedo no parque de diversões, se criança for maior ou igual a 5 anos e 
menor que 10 anos, com peso menor igual a 50 kg ou altura menor igual a 1,20 mostrar a mensagem 
“Criança liberada”, senão mostrar a mensagem “Criança não liberada”*/

using System;

namespace exercicio007
{
    class Program
    {
        static void Main(string[] args)
        {
            double idade, altura, peso;
            Console.Write("Informe a sua idade: ");
            idade = double.Parse(Console.ReadLine());

            Console.Write("\nInforme a sua altura: ");
            altura = double.Parse(Console.ReadLine());

            Console.Write("\nInforme o seu peso: ");
            peso = double.Parse(Console.ReadLine());

            if(idade >= 5 && idade < 10 && peso == 50 || altura <= 1.20)
            {
                Console.WriteLine("\n\"Crianca liberada\"");
            }else
            {
                Console.Write("Crianca nao liberada");
            }
        }
    }
}
