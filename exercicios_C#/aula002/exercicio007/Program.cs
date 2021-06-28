using System;

namespace exercicio007
{
    class Program
    {
        static void Main(string[] args)
        {
            //testando o operador E condicional (&&)
            Console.WriteLine("condicional AND (&&)" + "\nfalse && false: " + (false && false) + "\nfalse && true: " + (false && true) + "\ntrue && false: " + (true && false) + "\ntrue && true: " + (true && true));

            //testando o operador OU condicional (||)
            Console.WriteLine("condicional OR (||)" + "\nfalse || false: " + (false || false) + "\nfalse || true: " + (false || true) + "\ntrue || false: " + (true || false) + "\ntrue || true: " + (true || true));

            //testando o operador E logico (&)
            Console.WriteLine("\n\nlogico AND (&)" + "\nfalse & false: " + (false & false) + "\nfalse & true: " + (false & true) + "\ntrue & false: " + (true & false) + "\ntrue & true: " + (true & true));

            //testando operador OU logico (|)
            Console.WriteLine("\n\nlogico OR (|)" + "\nfalse | false: " + (false | false) +
            "\nfalse | true: " + (false | true) + "\ntrue | false: " + (true | false) + "\ntrue | true: " + (true | true));

            //testando operador OU exclusivo logico (^)
            Console.WriteLine("\n\nlogico exclusivo OR (^)" + "\nfalse ^ false: " + (false ^ false) + "\nfalse ^ true: " + (false ^ true) + "\ntrue ^ false: " + (true ^ false) + "\ntrue ^ true: " + (true ^ true));

            //testando operador NAO logico (!)
            Console.WriteLine("\n\nlogico NOT (!)" + "\n!false: " + (!false) + "\n!true: " + (!true));
        }
    }
}
