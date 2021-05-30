// programa do livro como programar em C#
// um programa de soma

using System;

namespace exercicio003
{
    class Program
    {
        static void Main (string [] orgs)
        {
            string firstNumber, secondNumber;
            int number1, number2, sum;

            Console.Write("informe o primeiro numero: ");
            firstNumber = Console.ReadLine();

            Console.Write("\ninforme o segundo numero: ");
            secondNumber = Console.ReadLine();

            number1 = Int32.Parse(firstNumber);
            number2 = Int32.Parse(secondNumber);

            sum = number1 + number2;

            Console.WriteLine("\nO resultado final da soma foi: {0}", sum);
        }
    }
}