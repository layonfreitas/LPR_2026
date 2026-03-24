using System;

int acumulador = 0;
for (int i = 51; i <=500; i += 3)
{
    if (i % 2 != 0) acumulador += i;
 
    
}
Console.WriteLine($"A soma dos números múltiplos de 3 entre 50 e 500 é: {acumulador}");