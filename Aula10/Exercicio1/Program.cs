using System;

namespace Exercicio1
{
    class retangulo
    {
        public double Altura;
        public double Largura;

        public double calcArea()
        {
            return Altura * Largura;
        }

        public double calcPerimetro()
        {
            return 2 * (Altura + Largura);
        }
    }
     class Program
    {
        static void Main(string[] args)
        {
         Console.WriteLine("Digite a altura do retângulo: ");
         double altura = Convert.ToDouble(Console.ReadLine());
         Console.WriteLine("Digite a largura do retângulo: ");
         double largura = Convert.ToDouble(Console.ReadLine());

         retangulo r = new retangulo();
         r.Altura = altura;
         r.Largura = largura;

         double area = r.calcArea();
         double perimetro = r.calcPerimetro();

         Console.WriteLine($"Área do retângulo: {area}");
         Console.WriteLine($"Perímetro do retângulo: {perimetro}");
        }
    }
}
