//Fazer um programa que entre com o nome do aluno, entre com as 4 notas, garantindo que as notas 
//estejam entre 0 e 10. Calcular média, e mostre no final o nome do aluno, a média e o resultado 
//baseado nas seguintes condições: abaixo de 3 – Reprovado, entre 3 e 5,9 – recuperação, acima de 
//6 – Aprovado.

using System;

namespace exercicio017
{
    class Program
    {
        static void Main(string[] args)
        {
            string nomAlu;
            double nota1, nota2, nota3, nota4 = 0, media;

            Console.Write("Informe o nome do aluno: ");
            nomAlu = Console.ReadLine();

            Console.Write("\nInforme a preira nota: ");
            nota1 = double.Parse(Console.ReadLine());

            while(nota4 >= 10 || nota4 <= 0)
            {
                Console.Write("\nInforme a preira nota: ");
                nota1 = double.Parse(Console.ReadLine());
    
            }
            Console.Write("\nInforme a sugunda nota: ");
            nota2 = double.Parse(Console.ReadLine());
            
            while(nota4 >= 10 || nota4 <= 0)
            {
                Console.Write("\nInforme a sugunda nota: ");
                nota2 = double.Parse(Console.ReadLine());
            }

            Console.Write("\nInforme a terceira nota: ");
            nota3 = double.Parse(Console.ReadLine());

            while(nota4 >= 10 || nota4 <= 0)
            {
                Console.Write("\nInforme a terceira nota: ");
                nota3 = double.Parse(Console.ReadLine());
            }

            Console.Write("\nInforme a quarta nota: ");
            nota4 = double.Parse(Console.ReadLine());

            while(nota4 >= 10 || nota4 <= 0)
            {
                Console.Write("\nInforme a quarta nota: ");
                nota4 = double.Parse(Console.ReadLine());
            }
            
            media = (nota1 + nota2 + nota3 + nota4)/4;
            
            Console.WriteLine("\nNome aluno: {0}",nomAlu);
            Console.WriteLine("Media do aluno foi: {0}", media);

            if(media < 3)
            {
                Console.WriteLine("Reprovado");
            }else if(media > 3 || media <= 5.9)
            {
                Console.WriteLine("Reculperacao");
            }else
            {
                Console.WriteLine("Aprovado");
            }

        }
    }
}
