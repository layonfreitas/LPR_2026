using System;

namespace Exercicio4
{
    public struct Heroi
    {
        public string Nome;
        public string Poder;
        public int Pontuacao;
        public bool Selecionado;
    }

    class Program
    {
        static Heroi[] herois = new Heroi[5];
        static int quantidadeHerois = 0;

        static void Main(string[] args)
        {
            Menu();
        }

        static void CadastrarHeroi()
        {
            Console.Write("Quantos heróis deseja cadastrar (1 a 5)? ");
            quantidadeHerois = int.Parse(Console.ReadLine());

            while (quantidadeHerois < 1 || quantidadeHerois > 5)
            {
                Console.Write("Digite um valor entre 1 e 5: ");
                quantidadeHerois = int.Parse(Console.ReadLine());
            }

            for (int i = 0; i < quantidadeHerois; i++)
            {
                Console.WriteLine($"Herói {i + 1}");

                Console.Write("Nome: ");
                herois[i].Nome = Console.ReadLine();

                Console.Write("Poder: ");
                herois[i].Poder = Console.ReadLine();

                Console.Write("Pontuação: ");
                herois[i].Pontuacao = int.Parse(Console.ReadLine());

                herois[i].Selecionado = false;
            }
        }

        static void SelecionarEquipe()
        {
            if (quantidadeHerois < 3)
            {
                Console.WriteLine("Cadastre pelo menos 3 heróis.");
                return;
            }

            for (int i = 0; i < quantidadeHerois; i++)
            {
                herois[i].Selecionado = false;
            }

            int selecionados = 0;

            while (selecionados < 3)
            {
                Console.WriteLine("Heróis disponíveis:");

                for (int i = 0; i < quantidadeHerois; i++)
                {
                    if (!herois[i].Selecionado)
                    {
                        Console.WriteLine($"{i + 1} - {herois[i].Nome}");
                    }
                }

                Console.Write("Escolha um herói: ");
                int opcao = int.Parse(Console.ReadLine());

                if (opcao >= 1 && opcao <= quantidadeHerois)
                {
                    if (!herois[opcao - 1].Selecionado)
                    {
                        herois[opcao - 1].Selecionado = true;
                        selecionados++;

                        Console.WriteLine($"{herois[opcao - 1].Nome} selecionado!");
                    }
                    else
                    {
                        Console.WriteLine("Esse herói já foi selecionado.");
                    }
                }
                else
                {
                    Console.WriteLine("Opção inválida.");
                }
            }

            Console.WriteLine("Equipe criada com sucesso!");
        }

        static void CalcularPontuacao()
        {
            int total = 0;

            for (int i = 0; i < quantidadeHerois; i++)
            {
                if (herois[i].Selecionado)
                {
                    total += herois[i].Pontuacao;
                }
            }

            Console.WriteLine($"Pontuação total da equipe: {total}");
        }

        static void ExibirEquipe()
        {
            Console.WriteLine("EQUIPE SELECIONADA ");

            for (int i = 0; i < quantidadeHerois; i++)
            {
                if (herois[i].Selecionado)
                {
                    Console.WriteLine(
                        $"Nome: {herois[i].Nome} | " +
                        $"Poder: {herois[i].Poder} | " +
                        $"Pontuação: {herois[i].Pontuacao}"
                    );
                }
            }
        }

        static void Menu()
        {
            int opcao;

            do
            {
                Console.WriteLine(" MENU");
                Console.WriteLine("1 - Cadastrar heróis");
                Console.WriteLine("2 - Selecionar equipe");
                Console.WriteLine("3 - Calcular pontuação");
                Console.WriteLine("4 - Exibir equipe");
                Console.WriteLine("5 - Sair");

                opcao = int.Parse(Console.ReadLine());

                switch (opcao)
                {
                    case 1:
                        CadastrarHeroi();
                        break;
                    case 2:
                        SelecionarEquipe();
                        break;
                    case 3:
                        CalcularPontuacao();
                        break;
                    case 4:
                        ExibirEquipe();
                        break;
                    case 5:
                        Console.WriteLine("Encerrando...");
                        break;
                    default:
                        Console.WriteLine("Opção inválida.");
                        break;
                }

            } while (opcao != 5);
        }
    }
}