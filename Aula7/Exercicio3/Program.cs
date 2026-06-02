using System;

namespace Exercicio3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] distancia = new int[4, 4];
            distancia[1, 0] = 524;
            distancia[2, 0] = 521;
            distancia[3, 0] = 882;
            distancia[0, 1] = 524;
            distancia[2, 1] = 434;
            distancia[3, 1] = 586;
            distancia[0, 2] = 521;
            distancia[1, 2] = 434;
            distancia[3, 2] = 429;
            distancia[0, 3] = 882;
            distancia[1, 3] = 586;
            distancia[2, 3] = 429;

            string cidade1, cidade2;
            cidade1 = "1";
            cidade2 = "2";

            while (cidade1 != cidade2)
            {

                Console.WriteLine("digite a cidade de origem:");
                cidade1 = Console.ReadLine();
                Console.WriteLine("digite a cidade de destino:");
                cidade2 = Console.ReadLine();

                if (cidade1 == cidade2)
                {
                    Console.WriteLine("Voce saiu");
                }
                else
                {
                    MostrarDistancia(cidade1, cidade2, distancia);
                }

        }   
    }
    static void MostrarDistancia(string cidade1, string cidade2, int[,] distancia){
    if ((cidade1 == "Vitória" && cidade2 == "Belo Horizonte") || (cidade1 == "Belo Horizonte" && cidade2 == "Vitória"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[0, 1]} km");
    }
    else if ((cidade1 == "Vitória" && cidade2 == "Rio de Janeiro") || (cidade1 == "Rio de Janeiro" && cidade2 == "Vitória"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[0, 2]} km");
    }
    else if ((cidade1 == "Vitória" && cidade2 == "São Paulo") || (cidade1 == "São Paulo" && cidade2 == "Vitória"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[0, 3]} km");
    }
    else if ((cidade1 == "Belo Horizonte" && cidade2 == "Rio de Janeiro") || (cidade1 == "Rio de Janeiro" && cidade2 == "Belo Horizonte"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[1, 2]} km");
    }
    else if ((cidade1 == "Belo Horizonte" && cidade2 == "São Paulo") || (cidade1 == "São Paulo" && cidade2 == "Belo Horizonte"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[1, 3]} km");
    }
    else if ((cidade1 == "Rio de Janeiro" && cidade2 == "São Paulo") || (cidade1 == "São Paulo" && cidade2 == "Rio de Janeiro"))
    {
        Console.WriteLine($"A distancia entre {cidade1} e {cidade2} é {distancia[2, 3]} km");
    }
    else
    {
        Console.WriteLine("Cidade não encontrada");
    }
}
}}
