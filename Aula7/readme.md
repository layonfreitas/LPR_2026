# 📚 Aula 7 — Vetores e Matrizes

---

## 🎯 Objetivo

Apresentar vetores e matrizes como forma de organização e representação de dados avançada, usando:

* 🗂️ Estruturas de dados
* 📦 Variáveis compostas homogêneas
* 📋 Vetores (implementação em C# e C++)
* 🔢 Matrizes (implementação em C# e C++)

---

## 📝 Exercícios

### Exercício 1 — Maior valor no vetor
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`vetor`

Construa um algoritmo que leia 5 números inteiros e os armazene em um vetor. Ao final, o programa deve exibir todos os números digitados, o maior valor armazenado e a posição em que esse valor se encontra.

---

### Exercício 2 — Separação de pares e ímpares
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`vetor`

Construa um algoritmo que leia 10 números inteiros e armazene-os em um vetor (use o loop `for` para fazer a leitura). Depois, gere automaticamente dois vetores: um contendo apenas os números pares e outro com os números ímpares digitados.

---

### Exercício 3 — Busca no vetor
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`vetor`

Construa um algoritmo que leia 10 números inteiros. Depois, solicite ao usuário um número que ele gostaria de pesquisar no vetor. Caso o número exista, informe em quais posições (índices) ele aparece e quantas ocorrências foram detectadas.

---

### Exercício 4 — Análise de notas escolares
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`vetor`

Crie um programa que leia o nome de 10 alunos e a nota de cada um (0 a 100). Armazene os nomes em um vetor de strings e as notas em um vetor de inteiros. Utilize uma função chamada `ClassificarAluno()` que receba a nota e retorne a situação com base nas regras:
* Nota `< 60`: Reprovado
* Nota `60 a 79`: Recuperação
* Nota `≥ 80`: Aprovado

Ao final, exiba um relatório contendo o Nome, Nota e Situação de cada aluno, a quantidade de alunos em cada estado (Aprovados, Recuperação, Reprovados) e a média geral da turma.

---

### Exercício 5 — Soma de matriz 3x3
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`matriz`

Construa um algoritmo que leia uma matriz 3x3 de números inteiros. Ao final, o programa deverá mostrar a matriz digitada no formato de grade e calcular a soma de todos os seus elementos.

---

### Exercício 6 — Distância entre cidades
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`matriz`

Crie um programa que inicialize uma matriz com as distâncias entre quatro cidades (Vitória, Belo Horizonte, Rio de Janeiro e São Paulo) e informe ao usuário a distância entre duas cidades fornecidas por ele. O programa deve repetir a leitura até que o usuário informe a mesma cidade como origem e destino.

| Cidade | Vitória | Belo Horizonte | Rio de Janeiro | São Paulo |
|---|---|---|---|---|
| **Vitória** | 0 | 524 | 521 | 882 |
| **Belo Horizonte** | 524 | 0 | 434 | 586 |
| **Rio de Janeiro** | 521 | 434 | 0 | 429 |
| **São Paulo** | 882 | 586 | 429 | 0 |

---

### Exercício 7 — Multiplicação de matrizes
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`matriz`

Crie um algoritmo que leia duas matrizes A e B, ambas de tamanho 3x3, e calcule o produto matricial A×B.

---

### Exercício 8 — Sistema de reserva de cinema
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`matriz`

Um cinema possui uma sala com 6 linhas e 8 colunas. Cada posição da matriz representa uma cadeira, onde `0 = livre` e `1 = ocupada`. Inicialmente, todas as cadeiras devem estar livres. Crie um sistema com o seguinte menu repetitivo:

| Opção | Ação |
|-------|------|
| `1` | Reservar assento |
| `2` | Cancelar reserva |
| `3` | Consultar assento (utilizar função `VerificarAssento()` que retorna "Livre" ou "Ocupado") |
| `4` | Mostrar mapa da sala |
| `5` | Encerrar |

---
