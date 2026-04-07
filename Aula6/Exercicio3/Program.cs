using System;

namespace Exercicio3
{
    class Program
    {
        static string Nomeheroi1, Nomeheroi2, Nomeheroi3, Nomeheroi4, Nomeheroi5;
        static string Poderheroi1, Poderheroi2, Poderheroi3, Poderheroi4, Poderheroi5;
        static int pontuacaoheroi1, pontuacaoheroi2, pontuacaoheroi3, pontuacaoheroi4, pontuacaoheroi5; 
        static bool sel1 = false, sel2 = false, sel3 = false, sel4 = false, sel5 = false;
        static void Main(string[] args)
        {
            menu();
        }

        static void CadastrarHeroi(){
            Console.WriteLine("Digite a quantidade de heróis a cadastrar:");
            int quantidade = int.Parse(Console.ReadLine());

            while (quantidade < 1 || quantidade > 5)
            {
                Console.WriteLine("Quantidade é inválida. Digite um número entre 1 e 5:");
                quantidade = int.Parse(Console.ReadLine());
            }
            for (int i = 0; i < quantidade; i++)
            {
                Console.WriteLine($"Digite o nome do herói {i + 1}:");
                string nome = Console.ReadLine();

                Console.WriteLine($"Digite o poder do herói {i + 1}:");
                string poder = Console.ReadLine();

                Console.WriteLine($"Digite a pontuação do herói {i + 1}:");
                int pontuacao = int.Parse(Console.ReadLine());

                switch (i)
                {
                    case 0:
                        Nomeheroi1 = nome;
                        Poderheroi1 = poder;
                        pontuacaoheroi1 = pontuacao;
                        break;
                    case 1:
                        Nomeheroi2 = nome;
                        Poderheroi2 = poder;
                        pontuacaoheroi2 = pontuacao;
                        break;
                    case 2:
                        Nomeheroi3 = nome;
                        Poderheroi3 = poder;
                        pontuacaoheroi3 = pontuacao;
                        break;
                    case 3:
                        Nomeheroi4 = nome;
                        Poderheroi4 = poder;
                        pontuacaoheroi4 = pontuacao;
                        break;
                    case 4:
                        Nomeheroi5 = nome;
                        Poderheroi5 = poder;
                        pontuacaoheroi5 = pontuacao;
                        break;
                }}
        }

        static void SelecionarEquipe()
        {
            int quantidadeSelecionada = 0;

            
            if (Nomeheroi1 == null && Nomeheroi2 == null && Nomeheroi3 == null && Nomeheroi4 == null && Nomeheroi5 == null)
            {
                Console.WriteLine("Nenhum herói cadastrado. Por favor, cadastre heróis primeiro.");
                
            }else
            {
                Console.WriteLine("Selecione os herois para as equipes:");
                if (Nomeheroi1 != null) Console.WriteLine($"1 - {Nomeheroi1} ");
                if (Nomeheroi2 != null) Console.WriteLine($"2 - {Nomeheroi2} ");
                if (Nomeheroi3 != null) Console.WriteLine($"3 - {Nomeheroi3} ");
                if (Nomeheroi4 != null) Console.WriteLine($"4 - {Nomeheroi4} ");
                if (Nomeheroi5 != null) Console.WriteLine($"5 - {Nomeheroi5} ");

            do
            {
                Console.WriteLine("Digite o numero do herói para a sua equipe:");
                int escolha = int.Parse(Console.ReadLine());
                switch (escolha)
                {
                    case 1:
                        if (Nomeheroi1 != null)
                        {
                            Console.WriteLine($"Você selecionou {Nomeheroi1} ");
                            quantidadeSelecionada++;
                            sel1 = true;
                        }
                        else
                        {
                            Console.WriteLine("Herói não cadastrado.");
                        }
                        break;
                    case 2:
                        if (Nomeheroi2 != null)
                        {
                            Console.WriteLine($"Você selecionou {Nomeheroi2} ");
                            quantidadeSelecionada++;
                            sel2 = true;
                        }
                        else
                        {
                            Console.WriteLine("Herói não cadastrado.");
                        }
                        break;
                    case 3:
                        if (Nomeheroi3 != null)
                        {
                            Console.WriteLine($"Você selecionou {Nomeheroi3}");
                            quantidadeSelecionada++;
                            sel3 = true;
                        }
                        else
                        {
                            Console.WriteLine("Herói não cadastrado.");
                        }
                        break;
                    case 4:
                        if (Nomeheroi4 != null)
                        {
                            Console.WriteLine($"Você selecionou {Nomeheroi4}");
                            quantidadeSelecionada++;
                            sel4 = true;
                        }
                        else
                        {
                            Console.WriteLine("Herói não cadastrado.");
                        }
                        break;
                    case 5:
                        if (Nomeheroi5 != null)
                        {
                            Console.WriteLine($"Você selecionou {Nomeheroi5}");
                            quantidadeSelecionada++;
                            sel5 = true;
                        }
                        else
                        {
                            Console.WriteLine("Herói não cadastrado.");
                        }
                        break;
                    default:
                        Console.WriteLine("Opção inválida. Tente novamente.");

                        break;

                }            } while (quantidadeSelecionada < 3);
                    calcularPontuacaoTotal();
            }
        }
            static void calcularPontuacaoTotal()
            {
                int pontuacaoTotal = 0;
                if (sel1) pontuacaoTotal += pontuacaoheroi1;
                if (sel2) pontuacaoTotal += pontuacaoheroi2;
                if (sel3) pontuacaoTotal += pontuacaoheroi3;
                if (sel4) pontuacaoTotal += pontuacaoheroi4;
                if (sel5) pontuacaoTotal += pontuacaoheroi5;

                Console.WriteLine($"Pontuação total da equipe: {pontuacaoTotal}");
           
            }

            static void exibirEquipe()
            {
                    Console.WriteLine("Equipe selecionada:");
                    if (sel1) Console.WriteLine($"Nome: {Nomeheroi1} - Poder: {Poderheroi1} - Pontuação: {pontuacaoheroi1}");
                    if (sel2) Console.WriteLine($"Nome: {Nomeheroi2} - Poder: {Poderheroi2} - Pontuação: {pontuacaoheroi2}");
                    if (sel3) Console.WriteLine($"Nome: {Nomeheroi3} - Poder: {Poderheroi3} - Pontuação: {pontuacaoheroi3}");
                    if (sel4) Console.WriteLine($"Nome: {Nomeheroi4} - Poder: {Poderheroi4} - Pontuação: {pontuacaoheroi4}");
                    if (sel5) Console.WriteLine($"Nome: {Nomeheroi5} - Poder: {Poderheroi5} - Pontuação: {pontuacaoheroi5}");
            }

            static void menu()
            {
                int opcao;
            do{
            Console.WriteLine("Digite uma opção:");
            Console.WriteLine("1 - Cadastrar heróis");
            Console.WriteLine("2 - Selecionar equipe");
            Console.WriteLine("3 - Calcular pontuação total da equipe");
            Console.WriteLine("4 - Exibir equipe selecionada");
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
                    calcularPontuacaoTotal();
                    break;
                case 4:
                    exibirEquipe();
                    break;
                case 5:
                    Console.WriteLine("Saindo do programa...");
                    break;
                default:
                    Console.WriteLine("Opção inválida.");
                    break;
            }
            } while (opcao != 5);
            }
           
            
        }
    }


