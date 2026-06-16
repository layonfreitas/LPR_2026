using System;

namespace Exercicio3
{
    public struct Livro
    {
        public string Titulo;
        public string Autor;
        public int AnoPublicacao;
        public int NumeroPaginas;
        public double Preco;
    
    }
    class Program
    {

        static void Main(string[] args)
        {
            Livro[] livros = new Livro[3];
                
            int contador = 0;
            double valorTotal = 0;
            double mediaPaginas = 0;


            while (contador < 3)
            {
                Console.WriteLine($"Livro {contador + 1}");
                Console.WriteLine("Título:");
                livros[contador].Titulo = Console.ReadLine();
                Console.WriteLine("Autor:");
                livros[contador].Autor = Console.ReadLine();
                Console.WriteLine("Ano de Publicação:");
                livros[contador].AnoPublicacao = int.Parse(Console.ReadLine()); 
                Console.WriteLine("Número de Páginas:");
                livros[contador].NumeroPaginas = int.Parse(Console.ReadLine());
                Console.WriteLine("Preço:");
                livros[contador].Preco = double.Parse(Console.ReadLine());
                contador++;
            }

            for (int i = 0; i < 3; i++)
            {
                valorTotal += livros[i].Preco;
                mediaPaginas += livros[i].NumeroPaginas;

            }
            mediaPaginas /= 3;

            Console.WriteLine($"O preco total dos 3 livros e {valorTotal}");
            Console.WriteLine($"A media de paginas dos 3 livros e {mediaPaginas}");
            }
        }



    }