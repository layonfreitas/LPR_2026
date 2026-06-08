using System;

namespace Exercicio1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numeros = new int[10];
            int[] pares = new int[10];
            int[] impares = new int[10];
            int contador = 0;
            int par = 0;
            int impar = 0;


            while (contador < 10)
            {
                Console.WriteLine("Digite um número:");
                numeros[contador] = int.Parse(Console.ReadLine());

                if (numeros[contador] % 2 == 0)
                {
                    pares[par] = numeros[contador];
                    par++;
                }
                else
                {
                    impares[impar] = numeros[contador];
                    impar++;
                }


                contador++;
            }

            Console.Write("Todos os números digitados:");
            for (int i = 0; i < 10; i++)
            {  
                Console.Write($" {numeros[i]}");
            }
                Console.WriteLine();

            Console.Write("Todos os números pares digitados:");
            for (int i = 0; i < par; i++)
            {
                Console.Write($" {pares[i]}");
            }
                Console.WriteLine();

            Console.Write("Todos os números impares digitados:");
            for (int i = 0; i < impar; i++)
            {
                Console.Write($" {impares[i]}");
            }
                
                
        }
    }
}
