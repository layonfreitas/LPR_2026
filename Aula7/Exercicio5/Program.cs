using System;

namespace Exercicio1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] matriz = new int[3, 3];
            int soma = 0;

            for (int i = 0; i <3; i++)
            {
                for (int j = 0; j <3; j++)
                {
                    Console.WriteLine($"Digite o termo da linha {i} e da coluna {j}:");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }
            for (int i = 0; i <3; i++)
            {
                for (int j = 0; j <3; j++)
                {
                    Console.Write(matriz[i, j] + " ");
                   soma += matriz[i, j];
                }
                Console.WriteLine();
            }

            Console.WriteLine($"A soma de todos os termos da matriz é: {soma}");
        }
    }
}