using System;
using System.Collections.Generic;

namespace Exercicio1
{
	class Program
	{
		static void Main(string[] args)
		{
			List<int> notas = new List<int>();

            int maiorNota = 0, menorNota = 0, mediaNotas = 0;
            for(int i = 0; i < 5; i++)
            {
                Console.WriteLine($"Digite a nota {i + 1}:");
                int nota = Convert.ToInt32(Console.ReadLine());
                notas.Add(nota);
                if (nota > maiorNota)
                {
                    maiorNota = nota;
                }
                if (menorNota == 0 || nota < menorNota)
                {
                    menorNota = nota;
                }

                    mediaNotas += nota;
            }
            mediaNotas /= 5;

            foreach (int nota in notas)
            {
                Console.WriteLine($"Nota: {nota}");
            }

            Console.WriteLine($"Maior nota: {maiorNota}");
            Console.WriteLine($"Menor nota: {menorNota}");
            Console.WriteLine($"Média das notas: {mediaNotas}");
		}
	}
}
