using System;

namespace exercicio018
{
    class Program
    {
        static void Main(string[] args)
        {
            string nomeFunc, cargo;
            int x = 0;
            double salario = 0, aliquota = 0, desconto = 0, correcao = 0, desconto2 = 0, desconto3, aliquota2 = 0, correcao2, desconto4;
            Console.Write("Informe o nome do funcionario: ");
            nomeFunc = Console.ReadLine();

            Console.Write("\nInforme o seu cargo: ");
            cargo = Console.ReadLine();

            Console.Write("\nInforme o valor do seu salario: R$");
            salario = double.Parse(Console.ReadLine());

            if(salario >= 0.00 || salario <= 1100.00)
            {
                aliquota = 7.5;
            }else if(salario > 1100.00 || salario <= 2203.48)
            {
                aliquota = 9.0;
            }else if(salario > 2203.48 || salario <= 3305.22)
            {
                aliquota = 12.0;
            }else if(salario > 3305.23 || salario <= 6433.57)
            {
                aliquota = 14.0;
            }

            desconto = (salario * aliquota)/100;
            correcao = salario - desconto;

            if(salario <= 22847.76)
            {
                //isento
                x = 1;
            }else if(salario >= 22847.77 || salario <= 33919.16)
            {
                aliquota2 = 7.5;
                desconto2 = 1713.58;
            }else if(salario >= 33919.81 || salario <= 45012.60)
            {
                aliquota2 = 15;
                desconto2 = 4259.57;
            }else if(salario >= 45012.61 || salario <= 55976.16)
            {
                aliquota2 = 22.5;
                desconto2 = 7633.51;
            }else if(salario > 55976.16)
            {
                aliquota2 = 27.5;
                desconto2 = 10432.32;
            }

            desconto3 = (salario * aliquota2)/100;
            correcao2 = salario - (desconto3 + desconto2);
            desconto4 = desconto2 + desconto3;

            Console.WriteLine("\nNome: {0}", nomeFunc);
            Console.WriteLine("Cargo: {0}", cargo);
            Console.WriteLine("Salario Bruto: {0}", salario);
            Console.WriteLine("Valor desconto INSS: {0}", desconto);
            if(x == 1)
            {
                Console.WriteLine("Valor desconto do imposto de Renda: {0}", desconto4);
            }else
            Console.WriteLine("\"Valor insuficiente\"");
        }
    }
}
