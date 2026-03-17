using System;

int funcionario;
float horasTrabalhadas,valorHora, salario;
Console.WriteLine("Digite a quantidade de funcionários: ");
funcionario = int.Parse(Console.ReadLine());
Console.WriteLine("Digite a quantidades de horas trabalhadas: ");
horasTrabalhadas = float.Parse(Console.ReadLine());
Console.WriteLine("Digite o valor da hora: ");
valorHora = float.Parse(Console.ReadLine());

salario = horasTrabalhadas * valorHora;
Console.WriteLine ($"Numeros de funcionarios: {funcionario}");
Console.WriteLine ($"Salario: U${salario:F2}");
