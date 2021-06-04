using System;

namespace exercicio028
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, resp=0, resp2=0, resp3=0, resp4=0, resp5=0;

            Console.Write("Insira o numero 1: ");
            num1 = Int32.Parse(Console.ReadLine());

            Console.Write("\nInsira o nomero 2: ");
            num2 = Int32.Parse(Console.ReadLine());

            Console.WriteLine("\n==== CALCULO ====");
            Console.WriteLine(" 1 - SOMA");
            Console.WriteLine(" 2 - SUBTRACAO");
            Console.WriteLine(" 3 - MULTIPLICACAO");
            Console.WriteLine(" 4 - DIVISAO");
            resp = Int32.Parse(Console.ReadLine());

            while(resp <= 0 || resp >= 5)
            {
                Console.WriteLine("Resposta incorreta repita");
                Console.WriteLine();

                Console.WriteLine("\n==== CALCULO ====");
                Console.WriteLine(" 1 - SOMA");
                Console.WriteLine(" 2 - SUBTRACAO");
                Console.WriteLine(" 3 - MULTIPLICACAO");
                Console.WriteLine(" 4 - DIVISAO");
                resp = Int32.Parse(Console.ReadLine());
            }

            if(resp == 1)
            {
                resp2 = num1 + num2;
            }else if(resp == 2)
            {
                resp3 = num1 - num2;
            }else if(resp == 3)
            {
                resp4 = num1 * num2;
            }else if(resp == 4)
            {
                resp5 = num1 / num2;
            }

            Console.WriteLine("SOMA: {0}", resp2);
            Console.WriteLine("SUBTRACAO: {0}", resp3);
            Console.WriteLine("MULTIPLICACAO: {0}", resp4);
            Console.WriteLine("DIVISAO: {0}", resp5);
        }
    }
}
