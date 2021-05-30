//Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso. − Caso o 
//número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO. − Caso o número de lados seja 
//superior a 5 escrever POLÍGONO NÃO IDENTIFICADO

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
            }else if(lado < 3)
            {
                Console.WriteLine("NAO E UM POLIGONO");
            }else if(lado > 5)
            {
                Console.WriteLine("POLIGONO NAO IDENTIFICADO");
            }
        }
    }
}
