using System;

namespace exercicio030
{
    class Program
    {
        static void Main(string[] args)
        {
            int temp;

            Console.Write("informe o tempo de corrida em minutos: ");
            temp = Int32.Parse(Console.ReadLine());

            if(temp == 15)
            {
                Console.WriteLine("\nGastou 170 calorias");
            }else if(temp == 30)
            {
                Console.WriteLine("Gastou 350 calorias");
            }else if(temp == 60)
            {
                Console.WriteLine("Gastou 700 calorias");
            }else if(temp == 90)
            {
                Console.WriteLine("Gastou 1050 calorias");
            }else if(temp == 120)
            {
                Console.WriteLine("Gastou 1400 calorias");
            }
        }
    }
}
