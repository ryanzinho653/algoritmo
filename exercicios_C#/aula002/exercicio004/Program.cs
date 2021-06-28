//exercicio do livro como programar em C#
//a estrutura de reperticao do/while

using System;

namespace exercicio004
{
    class Program
    {
        static void Main(string[] args)
        {
            int counter = 1;

            do{
                Console.WriteLine(counter);
                counter++;
            }while(counter <= 5);
        }
    }
}
