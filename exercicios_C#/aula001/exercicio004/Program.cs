//programa pego do livro como programar em C#
//usando instrucao if, operadores relacionais e operadores de igualdade

using System;

namespace exercicio004
{
    class Program
    {
        static void Main(string[] args)
        {
            int number1, number2;

            Console.Write("informe o primeiro numero inteiro: ");
            number1 = Int32.Parse(Console.ReadLine());

            Console.Write("informe o segundo numero inteiro: ");
            number2 = Int32.Parse(Console.ReadLine());

            if(number1 == number2)
            {
                Console.WriteLine(number1+" == "+number2);
            }if(number1 != number2)
            {
                Console.WriteLine(number1+" != "+number2);
            }if(number1 > number2)
            {
                Console.WriteLine(number1+" > "+number2);
            }if(number1 < number2)
            {
                Console.WriteLine(number1+" < "+number2);
            }if(number1 >= number2)
            {
                Console.WriteLine(number1+" >= "+number2);
            }if(number1 <= number2)
            {
                Console.WriteLine(number1+" <= "+number2);
            }
        }
    }
}
