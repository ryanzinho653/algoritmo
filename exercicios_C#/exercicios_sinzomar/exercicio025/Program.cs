﻿//Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha 
//válida é o número 1234. Devem ser impressas as seguintes mensagens: ACESSO PERMITIDO caso a 
//senha seja válida. ACESSO NEGADO caso a senha seja inválida.

using System;

namespace exercicio025
{
    class Program
    {
        static void Main(string[] args)
        {
            int senha;
            
            Console.WriteLine("Informe a senha");
            senha = Int32.Parse(Console.ReadLine());

            if(senha == 1234)
            {
                Console.WriteLine("ACESSO PERMITIDO");
            }else
            {
                Console.WriteLine("ACESSO NEGADO");
            }
        }
    }
}
