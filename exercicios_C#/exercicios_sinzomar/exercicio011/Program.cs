//As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem 
//compradas pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule e 
//escreva o valor total da compra

using System;

namespace exercicio011
{
    class Program
    {
        static void Main(string[] args)
        {
            int quantMacas;
            double preco;
            
            Console.WriteLine("======= Promocao do dia =======");
            Console.WriteLine("< 12 macas e igual a R$0,30");
            Console.WriteLine(">= 12 macas e igual a R$0,25");
            Console.WriteLine("==============================");

            Console.Write("Informe a quantidade de macas compradas: ");
            quantMacas = Int32.Parse(Console.ReadLine());

            if(quantMacas < 12)
            {
                preco = quantMacas*0.30;
            }else
            {
                preco = quantMacas*0.25;
            }

            Console.Write("o valor total pago pelas {0} macas e: R${1}",quantMacas, preco);
        }
    }
}
