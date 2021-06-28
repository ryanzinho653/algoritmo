using System;

namespace exercicio003
{
    class Program
    {
        static void Main(string[] args)
        {
            char grade;
            int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

            for (int i = 1; i <= 10; i++)
            {
                Console.Write("Insira uma nota de letra: ");
                grade = char.Parse(Console.ReadLine());

                switch (grade)
                {
                    case 'A': case 'a': ++aCount;
                    break;

                    case 'B' : case 'b' : ++bCount;
                    break;

                    case 'C' : case 'c' : ++cCount;
                    break;

                    case 'D' : case 'd' : ++dCount;
                    break;

                    case 'F' : case 'f' : ++fCount;
                    break;

                    default: Console.WriteLine("Tipo de letra incorreto inserido." + "\nNota não adicionada aos totais.");
                    break;
                }
                Console.WriteLine("\nOs totais para cada nota de letra são: \nA: {0}"+"\nB: {1}\nC: {2}\nD: {3}\nF: {4}", aCount, bCount, cCount, dCount, fCount);
            }
        }
    }
}
