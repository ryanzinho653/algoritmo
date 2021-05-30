// programa pego do livro como programar em C#
//analise dos resultados do exame

using System;

namespace exercicio006
{
    class Program
    {
        static void Main(string[] args)
        {
            int passes = 0, failures = 0, student = 1, result;

            while(student <= 10)
            {
                Console.WriteLine("insira o resultado (1 = passo, 2 = reprovado): ");
                result = Int32.Parse(Console.ReadLine());

                if (result == 1)
                {
                    passes = passes + 1;
                }else
                {
                    failures = failures + 1;
                }

                student = student + 1;
            }
            Console.WriteLine();
            Console.WriteLine("PASSOU: "+passes);
            Console.WriteLine("REPROVOU: "+failures);

            if (passes > 8)
            {
                Console.WriteLine("almentar a mensalidade\n");
            }
        }
    }
}
