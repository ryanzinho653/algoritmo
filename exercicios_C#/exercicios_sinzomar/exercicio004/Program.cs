//Crie um programa que receba 10 valores do usuário e ao final exiba a média aritmética dos números dados

using System;

namespace exercicio004
{
    class Program
    {
        static void Main(string[] args)
        {
            int contador = 0, i = 0, y = 1, x = 0;

            while(contador <= 10)
            {
                if(i < 3)
                {
                    i = i + y;
                
                Console.WriteLine(i);
                }else if(i >= 3)
                {   
                    if(x <= 5)
                    {
                        while(x != 5)
                        {
                            y = 2;
                            x = i + y;
            
                            Console.WriteLine(x);
                        }
                    }
                    y = i;
                    i = x;
                    x = i + y;
            
                    Console.WriteLine(x);
                }
                contador = contador + 1;
                
            }
        }
    }
}
