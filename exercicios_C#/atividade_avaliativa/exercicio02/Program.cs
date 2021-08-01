using System;

namespace exercicio02
{
    class Program
    {
        static void Main(string[] args)
        {
            Int32 array1;
            Console.Write("informe quantas casas deseja no seu Array: ");
            array1 = Int32.Parse(Console.ReadLine());
            Int32[] teste = new int[array1];
            int cont, aux = 0, aux2 = 0;
            Console.WriteLine("\nInforme "+array1+" valores: \n");
            for(cont = 0; cont < array1; cont++)
            {
                Console.Write(cont+" valor: ");
                teste[cont] = Int32.Parse(Console.ReadLine());
                Console.WriteLine("\n");
            }
            
            for(int cont1 = 0; cont1 < array1; cont1++)
            {   
                for (int a = 0; a < array1 - 1; a++)
                {
                    if( teste[a] >= teste[a + 1] )
                    {
                        aux = teste[a+1];
                        teste[a+1] = teste[a];
                        teste[a] = aux;
                    }     
                }
            }

            for (int b = 0; b < array1; b++)
            {
                Console.WriteLine(teste[b]);
            }

            for (int c = 0; c < array1; c++)
            {
                for (int d = 0; d < array1 - 1; d++)
                {
                    if (teste[d] <= teste[d + 1])
                    {
                        aux2 = teste[d + 1];
                        teste[d + 1] = teste[d];
                        teste[d] = aux2;
                    }
                }
            }

            for (int e = 0; e < array1; e++)
            {
                Console.WriteLine(teste[e]);               
            }
        }
    }
}
