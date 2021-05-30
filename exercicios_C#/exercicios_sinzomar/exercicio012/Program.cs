//Escreva um programa para ler 3 valores inteiros e escrevê-los em ordem crescente

using System;

namespace exercicio012
{
    class Program
    {
        static void Main(string[] args)
        {
            int resu1, resu2, resu3, resu4, resu5, resu6, resu7, resu8, resu9,
                resu10, resu11, resu12, resu13, resu14, resu15, resu16, resu17,
                resu18, resu19;
            
            Console.Write("Informe o primeiro valor: ");
            valor1 = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme o segundo valor: ");
            valor2 = Int32.Parse(Console.ReadLine());

            Console.Write("\nInforme o terceiro valor: ");
            valor3 = Int32.Parse(Console.ReadLine());

            if(valor1 > valor2 && valor1 > valor3)
            {
                resu1 = valor1;
            }else if(valor2 > valor1 && valor2 > valor3)
            {
                resu2 = valor2;
            }else if(valor3 > valor1 && valor3 > valor2)
            {
                resu3 = valor3;
            }else if(valor1 < valor2 && valor1 < valor3)
            {
                resu4 = valor1;
            }else if (valor2 < valor1 && valor2 < valor3)
            {
                resu5 = valor2;
            }else if(valor3 < valor1 && valor3 < valor2)
            {
                resu6 = valor3;
            }else if(valor1 > valor2 && valor1 < valor3)
            {
                resu7 = valor1;
            }else if(valor1 < valor2 && valor1 > valor3)
            {
                resu8 = valor1;
            }else if(valor2 > valor1 && valor2 < valor3)
            {
                resu9 = valor2;
            }else if(valor2 < valor1 && valor2 > valor3)
            {
                resu10 = valor2;
            }else if(valor3 > valor1 && valor3 < valor2)
            {
                resu11 = valor3;
            }else if(valor3 < valor1 && valor3 > valor2)
            {
                resu12 = valor3;
            }

            resu16 = resu1 + resu2 + resu3;
            Console.Write("\nO maior numero entre os tres foi: "+resu13);
            resu17 = resu4 + resu5 + resu6;
            Console.Write("\nO valor entre os tres que ficaram no meio foi: ",+resu14);
            resu19 = resu7 + resu8 + resu9 + resu10 + resu11 + resu12;
            Console.Write("\nO menor valor entre os tres valores foi: ",+resu15);
        }
    }
}
