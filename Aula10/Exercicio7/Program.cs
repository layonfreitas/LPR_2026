using System;
using System.Collections.Generic;

namespace Exercicio7
{
    class Livro
    {
        public string Titulo { get; set; }
        public string Autor { get; set; }
        public int AnoPublicacao { get; set; }

        public Livro(string titulo, string autor, int anoPublicacao)
        {
            Titulo = titulo;
            Autor = autor;
            AnoPublicacao = anoPublicacao;
        }
    }
    class Biblioteca
    {
        private List<Livro> livros;
        public Biblioteca()
        {
            livros = new List<Livro>();
        }
        public void AdicionarLivro(Livro livro)
        {
            livros.Add(livro);
        }
        public void ListarLivros()
        {
            Console.WriteLine("Livros na biblioteca:");
            foreach (var livro in livros)
            {
                Console.WriteLine($"Título: {livro.Titulo}, Autor: {livro.Autor}, Ano de Publicação: {livro.AnoPublicacao}");
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Biblioteca biblioteca = new Biblioteca();

            int quantidade;
            do
            {
                Console.Write("Quantos livros deseja cadastrar? ");
            }
            while (!int.TryParse(Console.ReadLine(), out quantidade) || quantidade <= 0);

            for (int i = 1; i <= quantidade; i++)
            {
                Console.WriteLine($"\nDados do livro {i}:");
                Console.Write("Título: ");
                string titulo = Console.ReadLine() ?? string.Empty;

                Console.Write("Autor: ");
                string autor = Console.ReadLine() ?? string.Empty;

                int anoPublicacao;
                do
                {
                    Console.Write("Ano de publicação: ");
                }
                while (!int.TryParse(Console.ReadLine(), out anoPublicacao));

                biblioteca.AdicionarLivro(new Livro(titulo, autor, anoPublicacao));
            }

            Console.WriteLine("\nLivros adicionados à biblioteca:");
            biblioteca.ListarLivros();
         }
    }
}
