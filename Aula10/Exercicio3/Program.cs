using System;

namespace Exercicio3
{
    class Aluno
    {
        private int matricula;
        private string nome;
        private double prova1, prova2, trabalho;

        public Aluno(int m, string n, double p1, double p2, double t)
        {
            matricula = m;
            nome = n;
            prova1 = p1;
            prova2 = p2;
            trabalho = t;
        }

        public double Media()
        {
            return (prova1*2.5 + prova2*2.5 + trabalho*2) / 7;
        }

        public double Final()
        {
            if (Media() < 60)
            {
                return 120 - Media();
            }
            return 0;
        }
        public void MostrarDados()
        {
            Console.WriteLine($"Matrícula: {matricula}");
            Console.WriteLine($"Nome: {nome}");
            Console.WriteLine($"Média: {Media().ToString("F2")}");

            if (Final() > 0)
            {
                Console.WriteLine($"Nota necessária para aprovação: {Final().ToString("F2")}");
            }
            else
            {
                Console.WriteLine("Aluno aprovado!");
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Digite a matrícula do aluno: ");
            int matricula = int.Parse(Console.ReadLine());
            Console.Write("Digite o nome do aluno: ");
            string nome = Console.ReadLine();
            Console.Write("Digite a nota da primeira prova: ");
            double prova1 = double.Parse(Console.ReadLine());
            Console.Write("Digite a nota da segunda prova: ");
            double prova2 = double.Parse(Console.ReadLine());
            Console.Write("Digite a nota do trabalho: ");
            double trabalho = double.Parse(Console.ReadLine());

            Aluno aluno = new Aluno(matricula, nome, prova1, prova2, trabalho);
            aluno.MostrarDados();
        }
    }
}
