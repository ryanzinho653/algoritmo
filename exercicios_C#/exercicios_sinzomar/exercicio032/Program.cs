using System;

namespace exercicio032
{
    class Program
    {
        static void Main(string[] args)
        {
            int resp;

            Console.WriteLine(" Codigo |     Palestra    ");
            Console.WriteLine("   1    |      Linux");
            Console.WriteLine("   2    |      Python");
            Console.WriteLine("   3    |  Windows Server");
            Console.WriteLine("   4    |  Banco de dados");
            
            Console.Write("informe o cogido da palestra que deseja ver: ");
            resp = Int32.Parse(Console.ReadLine());

            while(resp < 1 && resp > 4)
            {
                Console.WriteLine("\nResposta incorreta, informe novamente: ");
                Console.WriteLine();

                Console.WriteLine(" Codigo |     Palestra    ");
                Console.WriteLine("   1    |      Linux");
                Console.WriteLine("   2    |      Python");
                Console.WriteLine("   3    |  Windows Server");
                Console.WriteLine("   4    |  Banco de dados");
            }

            if(resp == 1)
            {
                Console.WriteLine("Auditorio 1");
                Console.WriteLine("Acontecera das 8h as 9h");
            }else if(resp == 2)
            {
                Console.WriteLine("Auditorio 2");
                Console.WriteLine("Acontecera das 9h as 10h");
            }else if(resp == 3)
            {
                Console.WriteLine("Auditoria 3");
                Console.WriteLine("Acontecera das 13h as 14h");
            }else if(resp == 4)
            {
                Console.WriteLine("Auditoria 4");
                Console.WriteLine("Acontecera das 15h as 17h");
            }
        }
    }
}
