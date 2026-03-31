using System;

namespace Exercicio3
{
    class Program
    {
        static string Nomeheroi1, Nomeheroi2, Nomeheroi3, Nomeheroi4, Nomeheroi5;
        static string Poderheroi1, Poderheroi2, Poderheroi3, Poderheroi4, Poderheroi5;
        static int pontuacaoheroi1, pontuacaoheroi2, pontuacaoheroi3, pontuacaoheroi4, pontuacaoheroi5; 
        static void Main(string[] args)
        {
            Console.WriteLine("Digite uma opção:");
            Console.WriteLine("1 - Cadastrar heróis");
            int opcao = int.Parse(Console.ReadLine());

            switch (opcao)
            {
                case 1:
                    CadastrarHeroi();
                    break;
                default:
                    Console.WriteLine("Opção inválida.");
                    break;
            }
           
        }

        static void CadastrarHeroi(){
            Console.WriteLine("Digite o nome do herói 1:");
            Nomeheroi1 = Console.ReadLine();
            Console.WriteLine("Digite o poder do herói 1:");
            Poderheroi1 = Console.ReadLine();
            Console.WriteLine("Digite a pontuação do herói 1:");
            pontuacaoheroi1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o nome do herói 2:");
            Nomeheroi2 = Console.ReadLine();    
            Console.WriteLine("Digite o poder do herói 2:");
            Poderheroi2 = Console.ReadLine();
            Console.WriteLine("Digite a pontuação do herói 2:");
            pontuacaoheroi2 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o nome do herói 3:");
            Nomeheroi3 = Console.ReadLine();    
            Console.WriteLine("Digite o poder do herói 3:");
            Poderheroi3 = Console.ReadLine();
            Console.WriteLine("Digite a pontuação do herói 3:");
            pontuacaoheroi3 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o nome do herói 4:");
            Nomeheroi4 = Console.ReadLine();    
            Console.WriteLine("Digite o poder do herói 4:");    
            Poderheroi4 = Console.ReadLine();
            Console.WriteLine("Digite a pontuação do herói 4:");
            pontuacaoheroi4 = int.Parse(Console.ReadLine());       

            Console.WriteLine("Digite o nome do herói 5:");
            Nomeheroi5 = Console.ReadLine();    
            Console.WriteLine("Digite o poder do herói 5:");
            Poderheroi5 = Console.ReadLine();
            Console.WriteLine("Digite a pontuação do herói 5:");
            pontuacaoheroi5 = int.Parse(Console .ReadLine());   

        }

       
        }
    }
