using System;

namespace exercicio019
{
    class Program
    {
        static void Main(string[] args)
        {
            int valor = 0;

            Console.Write("Informe um valor: ");
            valor = Int32.Parse(Console.ReadLine());

            if(valor >= 30 && valor % 2 == 0)
            {
                Console.WriteLine("Valor par maior que 30");
            }else if(valor >= 30 && valor % 2 != 0)
            {
                Console.WriteLine("Valor impar maior que 30");
            }else if(valor <= 29 && valor & 2 == 0)
            {
                Console.WriteLine("valor par menor que 30");
            }else if(valor <= 29 && valor & 2 != 0)
            {
                Console.WriteLine("valor impar menor que 30");
            }
        }
    }
}
