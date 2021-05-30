// codigo pego do livro como programar em C#
// media da turma com repeticao controlada por sentinela

using System;

namespace exercicio005
{
    class Program
    {
        static void Main(string[] args)
        {
            int total, grandeCounter, grandeValue;
            double average;

            total = 0;
            grandeCounter = 0;

            Console.Write("insira uma nota de valor inteiro, -1 para sair: ");
            grandeValue = Int32.Parse(Console.ReadLine());

            while (grandeValue != -1)
            {
                total = total + grandeValue;

                grandeCounter = grandeCounter + 1;

                Console.Write("insira uma nota de valor inteiro, -1 para sair: ");
                grandeValue = Int32.Parse(Console.ReadLine());
            }

            if(grandeCounter != 0)
            {
                average = (double) total/grandeCounter;

                Console.WriteLine("\n A media da classe foi: {0}", average);
            }else
            {
                Console.WriteLine("nunhuma media foi inserida");
            }
        }
    }
}
