using System;

int qnt , contador = 0 , numero, nPar = 0;
float acumulador = 0;
Console.WriteLine("Digite a quantidade de números que deseja digitar: ");
qnt = int.Parse(Console.ReadLine());

while (contador < qnt)
{
    Console.WriteLine("Digite outro numero: ");
    numero = int.Parse(Console.ReadLine());
    contador++;
    if (numero % 2 == 0)
        {
            acumulador += numero;
            nPar++;
        }
      
    
}
Console.WriteLine($"A média dos números pares é: {acumulador / nPar}");
