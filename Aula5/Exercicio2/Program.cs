using System;

Random numAleatorio = new Random();
int valorInteiro = numAleatorio.Next(1, 100);
int chute;

do
{
    Console.WriteLine("Tente adivinhar o número entre 1 e 100: ");
    chute = int.Parse(Console.ReadLine());

    if (chute < valorInteiro)
    {
        Console.WriteLine("O número é maior que o seu chute.");
    }
    else if (chute > valorInteiro)
    {
        Console.WriteLine("O número é menor que o seu chute.");
    }

} while (chute != valorInteiro);

Console.WriteLine("Parabéns! Você acertou o número!");