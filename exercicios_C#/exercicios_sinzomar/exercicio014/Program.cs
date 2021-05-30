//Escreva um programa para ler o número de lados de um polígono regular. Calcular e imprimir o 
//seguinte: − Se o número de lados for igual a 3 escrever TRIÂNGULO. − Se o número de lados for 
//igual a 4 escrever QUADRADO. − Se o número de lados for igual a 5 escrever PENTÁGONO

using System;

namespace exercicio014
{
    class Program
    {
        static void Main(string[] args)
        {
            int lado;
            
            Console.Write("Informe quantos lados tem o seu poligono regular: ");
            lado = Int32.Parse(Console.ReadLine());

            if(lado == 3)
            {
                Console.WriteLine("\nTRIANGULO");
            }else if(lado == 4)
            {
                Console.WriteLine("QUADRADO");
            }else if(lado == 5)
            {
                Console.WriteLine("PENTAGONO");
            }
        }
    }
}
