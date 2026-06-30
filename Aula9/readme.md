# 📚 Aula 09 — Listas e Dicionários

---

## 🎯 Objetivo
Explorar as estruturas de dados avançadas Lista e Dicionário, compreendendo seus conceitos, métodos e funcionalidades, usando:

* 🔗 Listas (vetores dinâmicos)
* 🗂️ Dicionários (pares chave-valor)
* 🧩 Tipos de inferência `var` (C#) e `auto` (C++)
* 🧱 Implementação em C# e C++

---

## 📝 Exercícios

> São 8 exercícios no total. Resolva **4 em C++** e **4 em C#**.

### Exercício 0 — Organização da tarefa
`obrigatório`

Criar o diretório `LPR/Aula9` no repositório local, adicionar descrição no `readme.md` e responder ao questionário da aula.

🔗 Questionário: https://forms.gle/dHFxmJiCJ9fVjXcc8

---

### Exercício 1 — Cadastro de notas
`iniciante` `opcional`

Solicitar 5 notas ao usuário e armazená-las em uma **lista**. Exibir:

* Todas as notas cadastradas
* A maior nota
* A menor nota
* A média das notas

---

### Exercício 2 — Lista de nomes por tamanho
`intermediário`

Construir uma **lista** de X nomes aleatórios. A saída deve ser exibida em linhas, ordenadas por tamanho (do menor para o maior), respeitando a ordem de digitação para nomes de mesmo tamanho.

| Entrada (exemplo) | Saída (exemplo) |
|---|---|
| sergio, ana, maria, carlos, eva, joaquim, jo, mara, laura, lucas, ari, paulo | `jo, ana, mara, maria, sergio, joaquim`<br>`eva, laura, carlos`<br>`ari, lucas`<br>`paulo` |

---

### Exercício 3 — Números ordenados e filtrados
`intermediário`

Construir uma **lista** de 100 números aleatórios.

* Ordenar de forma crescente e imprimir
* Remover todos os números pares e imprimir novamente
* Identificar e imprimir números repetidos (se houver)

---

### Exercício 4 — Ranking de pilotos
`avançado` `opcional`

Criar uma `struct Piloto` com os campos `Nome`, `Equipe` e `Pontuação`, armazenados em uma **lista**. Implementar as funções:

| Função | Descrição |
|--------|-----------|
| `CadastrarPiloto()` | Cadastra 10 pilotos |
| `ExibirRanking()` | Exibe ranking em ordem decrescente de pontuação |
| `CalcularPontuacaoMedia()` | Calcula a média de pontos do campeonato |
| `ExibirMelhorEquipe()` | Determina a equipe com maior soma de pontos |

> O programa também deve exibir quantos pilotos ficaram acima da média.

---

### Exercício 5 — Gêneros de jogos
`iniciante` `opcional`

Utilizar um **dicionário** para armazenar jogos (chave) e seus gêneros (valor). Cadastrar pelo menos 5 jogos, buscar o gênero a partir do nome informado e exibir mensagem caso o jogo não esteja cadastrado.

---

### Exercício 6 — Idades em dicionário
`intermediário`

Construir um **dicionário** de X pares chave-valor (nome → idade).

* Imprimir todas as pessoas com idade acima da média
* Imprimir a pessoa mais velha e a mais nova
* Remover todas as pessoas com idade igual a um valor Y informado pelo usuário e imprimir o dicionário atualizado

---

### Exercício 7 — Populações em dicionário
`intermediário`

Construir um **dicionário** de X pares chave-valor (cidade → população).

* Imprimir todas as cidades com população acima da média
* Imprimir a cidade mais populosa e a menos populosa
* Remover todas as cidades com população igual a um valor Y informado pelo usuário e imprimir o dicionário atualizado

---

### Exercício 8 — Sistema de biblioteca
`avançado` `opcional`

Criar uma `struct Livro` com os campos `Título`, `Autor`, `Ano de publicação` e `Quantidade disponível`, armazenada em um **dicionário** (chave: código do livro → valor: struct Livro). Implementar as funções:

| Função | Descrição |
|--------|-----------|
| `CadastrarLivro()` | Cadastra 10 livros |
| `BuscarLivro()` | Busca um livro pelo código |
| `EmprestarLivro()` | Realiza empréstimo, reduzindo a quantidade disponível (impede empréstimo sem exemplares) |
| `ExibirRelatorio()` | Exibe total de livros, livro mais antigo, livro com maior quantidade disponível e quantidade de livros por autor |




