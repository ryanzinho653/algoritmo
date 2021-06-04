using System;

namespace exercicio031
{
    class Program
    {
        static void Main(string[] args)
        {
            int numPlac =0;
            
            Console.Write("informe o ultimo numero da placa: ");
            numPlac = Int32.Parse(Console.ReadLine());

            while(numPlac < 0 || numPlac > 7)
            {
                Console.Write("\nOpcao invalida, informe novamente: ");
                numPlac = Int32.Parse(Console.ReadLine());
            }
                if(numPlac >= 0 && numPlac <= 2)
                    Console.WriteLine("\nNao circular na segunda feira");
                else if(numPlac == 3)
                    Console.WriteLine("Nao circular na terca feira");
                else if(numPlac == 4)
                    Console.WriteLine("Nao circular na quarta feira");
                else if(numPlac == 5)
                    Console.WriteLine("Nao circular na quinta feira");
                else if(numPlac == 6)
                    Console.WriteLine("Nao circular na sexta feira");
        }
    }
}
