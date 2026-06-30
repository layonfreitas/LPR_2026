using System;

namespace Exercicio2
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> nomes = new List<string>();
            int n = 0, contador = 0;
            int tamanho = 0;
            Console.WriteLine("Digite um número da quantidades de nomes :");
            n = Convert.ToInt32(Console.ReadLine());
            while (contador < n)
            {
                contador++;
                Console.WriteLine($"Digite o {contador}º nome:");
                string nome = Console.ReadLine();
                nomes.Add(nome);
            }
                for (int i = 0; i < nomes.Count - 1; i++)
                {
                    for (int j = i + 1; j < nomes.Count; j++)
                    {
                        if (nomes[i].Length > nomes[j].Length)
                        {
                            string aux = nomes[i];
                            nomes[i] = nomes[j];
                            nomes[j] = aux;
                        }
                        else if (nomes[i].Length == nomes[j].Length)
                        {
                            if (nomes[i].CompareTo(nomes[j]) > 0)
                            {
                                string aux = nomes[i];
                                nomes[i] = nomes[j];
                                nomes[j] = aux;
                            }
                        }
                    }
                }
            while (nomes.Count > 0)
            {
                List<string> linha = new List<string>();
                List<int> tamanhosNaLinha = new List<int>();

                for (int i = 0; i < nomes.Count;)
                {
                 
                        tamanho = nomes[i].Length;
                        if (tamanhosNaLinha.Contains(tamanho))
                        {
                            i++;
                        }
                        else
                        {
                            linha.Add(nomes[i]);
                            tamanhosNaLinha.Add(tamanho);
                            nomes.RemoveAt(i);
                        }
                        
                    
                }
                

                string texto = "";
                for (int x = 0; x < linha.Count; x++)
                {
                    texto = texto + linha[x];
                    if (x < linha.Count - 1)
                        texto = texto + ", ";
                }

                Console.WriteLine(texto);

            }
        }   
    }
}

