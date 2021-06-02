//Faça um programa em C# modo console que solicite a entrada via teclado do nome do cliente, 
//idade e sexo, se cliente maior ou igual a 20 anos do sexo masculino solicite o número da 
//reservista e do CPF, senão solicite CPF, no final mostre nome, idade, sexo. Se maior ou igual a 
//20 anos do sexo masculino mostrar número da reservista e CPF, senão mostrar apenas o CPF

using System;

namespace exercicio021
{
    class Program
    {
           static void Main(string[] args)
        {
            string  nome, sexo, cpf;
            int  numReserv, idade;

            numReserv = 0;
            Console.Write("informe seu nome: ");
            nome = Console.ReadLine();

            Console.Write("\ninforme a sua idade: ");
            idade = Int32.Parse(Console.ReadLine());

            Console.Write("\ninforme o seu sexo: ");
            sexo = Console.ReadLine();

            if(idade >= 20 && sexo == "MASCULINO")
            {
                Console.Write("\nInforme seu numero de reservista: ");
                numReserv = Int32.Parse(Console.ReadLine());

                Console.Write("\nInforme seu CPF: ");
                cpf = Console.ReadLine();
            }else 
            {
                Console.Write("\nInforme seu CPF: ");
                cpf = Console.ReadLine();
            }
            Console.Clear();

            Console.WriteLine("\nNome: {0}", nome);
            Console.WriteLine("Idade: {0}", idade);
            Console.WriteLine("Sexo: {0}", sexo);

            if(idade >= 20 && sexo == "MASCULINO")
            {
                Console.WriteLine("Numero de reservista: {0}", numReserv);
                Console.WriteLine("CPF: {0}", cpf);
            }else 
            {
                Console.WriteLine("CPF: {0}", cpf);
            }


        }
    }
}
