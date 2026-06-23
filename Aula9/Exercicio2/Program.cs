using System;

namespace Exercicio2
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> nomes = new List<string>();
            int n = 0, contador = 0;
            Console.WriteLine("Digite um número da quantidades de nomes :");
            n = Convert.ToInt32(Console.ReadLine());
            while (contador < n)
            {
                contador++;
                Console.WriteLine($"Digite o {contador}º nome:");
                string nome = Console.ReadLine();
                nomes.Add(nome);
            }
            while (nomes.Count > 0)
            {
                
            }
        }   
    }
}

