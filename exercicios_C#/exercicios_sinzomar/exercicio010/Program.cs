//Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Devem //ser impressas as seguintes mensagens: ACESSO PERMITIDO caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida

using System;

namespace exercicio010
{
    class Program
    {
        static void Main(string[] args)
        {
            int senha = 0;
            
            while(senha != 1234)
            {
                Console.Write("Informe a sua senha: ");
                senha = Int32.Parse(Console.ReadLine());

                if(senha == 1234)
                {
                    Console.WriteLine("\nSenha correta");
                }else
                {
                    Console.WriteLine("Senha incorreta");
                }
            }
        }
    }
}
