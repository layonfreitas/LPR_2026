using System;

namespace Exercicio3
{
    class Program
    {
        static void Main(string[] args)
        {
            
        int[] numeros = new int[10];
        int vezes = 0;
        int numero = 0;
        int posicao = 0;

        Console.WriteLine("Digite 10 numeros inteiros:");

        for (int i = 0; i < 10; i++)
        {
            numeros[i] = int.Parse(Console.ReadLine());
        }

        Console.WriteLine("Digite o numero que voce quer pesquisar:");
        numero = int.Parse(Console.ReadLine());

        foreach (int num in numeros)
        {
            if (num == numero)
            {
                Console.WriteLine("O seu numero foi achado na posicao: " + posicao);
                vezes++;
            }
            posicao++;
        }

        if (vezes == 0)
        {
            Console.WriteLine("O seu numero nao foi achado");
        }
        }
}
}