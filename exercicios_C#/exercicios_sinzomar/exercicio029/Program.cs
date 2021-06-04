using System;

namespace exercicio029
{
    class Program
    {
        static void Main(string[] args)
        {
            double nota;
            string nome;

            Console.Write("Informe o seu nome: ");
            nome = Console.ReadLine();
            Console.Write("\nInforme a sua nota: ");
            nota = double.Parse(Console.ReadLine());

            if(nota >= 1 && nota <= 2)
            {
                Console.WriteLine("\nNota pessima");
            }else if(nota >= 3 && nota <= 4)
            {
                Console.WriteLine("Nota ruim");
            }else if(nota >= 5 && nota <= 6)
            {
                Console.WriteLine("Nota pouco ruim");
            }else if(nota == 7)
            {
                Console.WriteLine("Nota Boa");
            }else if(nota >= 8 && nota <= 9)
            {
                Console.WriteLine("Nota muito Boa");
            }else if(nota == 10)
            {
                Console.WriteLine("Nota Exelente");
            }else
            Console.WriteLine("Opcao invalida");
        }
    }
}
