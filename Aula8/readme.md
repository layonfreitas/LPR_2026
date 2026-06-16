# 📚 Aula 8 — Registros (Structs)

---

## 🎯 Objetivo

Compreender e utilizar registros (`struct`) para representar entidades compostas por diferentes tipos de dados, usando:

* 📦 Variáveis compostas heterogêneas
* 🧱 Structs (implementação em C# e C++)

---

## 📝 Exercícios

### Exercício 1 — Cadastro de filmes
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`iniciante` `opcional`

Definir uma `struct Filme` com os campos `Titulo`, `Diretor`, `AnoLancamento` e `DuracaoMinutos`. Solicitar dados de 3 filmes, armazená-los em um vetor de structs, exibir todos os filmes cadastrados e informar qual é o mais antigo.

---

### Exercício 2 — Estoque de produtos
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`intermediário`

Definir uma `struct Produto` com os campos `Nome`, `Codigo`, `Preco` e `Quantidade`. Permitir ao usuário inserir dados de 3 produtos e exibir o valor total em estoque (preço × quantidade de cada produto).

---

### Exercício 3 — Biblioteca de livros
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
`intermediário`

Definir uma `struct Livro` com os campos `Titulo`, `Autor`, `AnoPublicacao`, `NumeroPaginas` e `Preco`. Permitir ao usuário inserir dados de 3 livros e calcular o preço total e a média de páginas.

---

### Exercício 4 — Sistema de heróis Marvel
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`avançado`

Retomada do exercício da Aula 6, agora utilizando `struct` para armazenar os heróis. O sistema deve conter as funções:

| Função | Descrição |
|--------|-----------|
| `cadastrarHeroi()` | Cadastra nome, poder e pontuação de até 5 heróis em uma struct |
| `selecionarEquipe()` | Exibe os heróis e permite escolher 3 para a equipe |
| `calcularPontuacaoTotal()` | Soma as pontuações dos heróis selecionados |
| `exibirEquipe()` | Mostra os heróis, poderes e pontuação total |
| `menuPrincipal()` | Menu com todas as opções disponíveis |

> ⚠️ **Requisitos:** usar `struct` para armazenar os dados; sem classes ou listas. O programa roda até o usuário sair.

---

### Exercício 5 — Sistema de chamados
![C#](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
`avançado` `opcional`

Criar uma `struct Chamado` com os campos `Numero`, `Solicitante`, `Setor`, `Prioridade` (1 a 3), `Status` e `Descricao`. O sistema deve ter as funções:

| Função | Descrição |
|--------|-----------|
| `cadastrarChamado()` | Cadastra até 10 chamados com status inicial "Aberto" |
| `listarChamados()` | Exibe todos os chamados cadastrados |
| `atualizarStatus()` | Altera o status para: Em andamento, Resolvido ou Cancelado |
| `classificarPrioridade()` | Retorna: 1 = Baixa, 2 = Média, 3 = Alta |
| `estatisticas()` | Exibe contagem de chamados por status |
