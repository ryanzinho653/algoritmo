//Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de 
//uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes 
//Fórmulas: - para homens: (72.7 * Altura) – 58 - para mulheres: (62.1 * Altura) – 44.7

using System;

namespace exercicio013
{
    class Program
    {
        static void Main(string[] args)
        {
            double altura, pesoH, pesoM;
            int sexo;
            Console.Write("Informe a sua altura: ");
            altura = double.Parse(Console.ReadLine());
            Console.WriteLine("\nInforme seu sexo");
            Console.WriteLine("Caso seja mulher digite 1");
            Console.Write("caso seja homem digite 2");
            sexo = Int32.Parse(Console.ReadLine());

            if(sexo == 1)
            {
                pesoM = (62.1*altura) - 44.7;
                Console.Write("O pesso ideal para voce e: ",+pesoM);
            }else if(sexo == 2)
            {
                pesoH = (72.7*altura) - 58;
                Console.Write("O pesso ideal para voce e: ",+pesoH);
            }
        }
    }
}
