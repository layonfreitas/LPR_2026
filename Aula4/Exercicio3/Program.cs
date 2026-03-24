using System;


int classe;
Console.WriteLine("Escolha uma classe: \n 1 - Guerreira \n 2 - Mago \n 3 - Arqueiro");
classe = int.Parse(Console.ReadLine());
switch (classe)
{
    case 1:
        Console.WriteLine("Você escolheu a classe Guerreira! Suas habilidades são Ataque Pesado, Defesa Total.");
        break;
    case 2:
        Console.WriteLine("Você escolheu a classe Mago! Suas habilidades são Bola de Fogo, Escudo de Gelo.");
        break;
    case 3:
        Console.WriteLine("Você escolheu a classe Arqueiro! Suas habilidades são Flecha Precisa, Disparo Triplo.");
        break;
    default:
        Console.WriteLine("Opção inválida! Por favor, escolha uma classe válida.");
        break;
}
