//As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem 
//compradas pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule e 
//escreva o valor total da compra

using System;

namespace exercicio026
{
    class Program
    {
        static void Main(string[] args)
        {
            int quant;
            double preco;

            Console.Write("Informe a quantidade de macas compradas: ");
            quant = Int32.Parse(Console.ReadLine());

            if(quant < 12)
            {
                preco = quant * 0.30;
                Console.WriteLine("\nO preco pago por {0} e R${1}", quant, preco);
            }else if(quant >= 12)
            {
                preco = quant * 0.25;
                Console.WriteLine("O preco pago por {0} e R${1}", quant, preco);
            }
        }
    }
}
