using System;

namespace Exercicio5
{
    class Produto
    {
        public string Nome { get; set; }
        public double Preco { get; set; }

        public Produto(string nome, double preco)
        {
            Nome = nome;
            Preco = preco;
        }

    }
    class Pedido
    {
        public Produto Produto { get; set; }
        public int Quantidade { get; set; }

        public Pedido(Produto produto, int quantidade)
        {
            Produto = produto;
            Quantidade = quantidade;
        }

        public double CalcularTotal()
        {
            return Produto.Preco * Quantidade;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Produto produto1 = new Produto("Teclado", 150.00);

            Pedido pedido1 = new Pedido(produto1, 3);

            Console.WriteLine("Produto: " + pedido1.Produto.Nome);
            Console.WriteLine("Quantidade: " + pedido1.Quantidade);
            Console.WriteLine("Preço unitário: R$ " + pedido1.Produto.Preco.ToString("F2"));
            Console.WriteLine("Preço total: R$ " + pedido1.CalcularTotal().ToString("F2"));
        }
    }
}
