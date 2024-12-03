Jogo da Velha - Implementação e Testes
Este repositório contém a implementação de um Jogo da Velha em C++. O objetivo do projeto foi criar uma função que verifica o estado de um jogo da velha, determinando o vencedor (se houver), se o jogo terminou em empate, se está indefinido ou se é impossível de ser jogado devido a violações das regras. A função foi implementada utilizando a metodologia Test-Driven Development (TDD) e testada com diversos cenários.

Sumário
Descrição do Jogo
Requisitos
Como Baixar e Configurar
Funcionalidades
Testes
Exemplos de Matrizes de Teste
Licença
Descrição do Jogo
O Jogo da Velha é um jogo de tabuleiro simples onde dois jogadores (um usando o símbolo X e o outro usando o símbolo O) alternam entre marcar suas posições no tabuleiro 3x3 até que um dos jogadores vença ou o jogo termine em empate.

Objetivo da Função
A função VerificaVelha recebe uma matriz 3x3 de inteiros representando o tabuleiro, com os seguintes valores:

0: posição vazia
1: posição marcada por X
2: posição marcada por O
A função realiza a seguinte verificação:

Retorna 1 se o vencedor foi o X (1).
Retorna 2 se o vencedor foi o O (2).
Retorna 0 se o jogo terminou em empate.
Retorna -1 se o jogo está indefinido (ainda há espaços vazios).
Retorna -2 se o jogo é impossível pelas regras (violações como o número de jogadas de X e O incoerentes).
Requisitos
C++: O código foi implementado em C++ e pode ser compilado com qualquer compilador moderno de C++ (GCC, Clang, Visual Studio, etc.).
Sistema Operacional: O projeto foi testado em Linux e Windows, mas pode ser facilmente configurado em qualquer sistema operacional que suporte C++.
Como Baixar e Configurar
1. Clonar o Repositório
Primeiro, você deve clonar o repositório para sua máquina local. Use o comando Git:

bash
Copiar código
git clone https://github.com/seu-usuario/jogo-da-velha.git
2. Navegar até o Diretório do Projeto
Entre no diretório do projeto:

bash
Copiar código
cd jogo-da-velha
3. Compilar o Código
O código pode ser compilado com o compilador C++ de sua preferência. Aqui estão alguns exemplos:

Usando o GCC (Linux ou Windows com MinGW):
bash
Copiar código
g++ -o jogo_velha jogo_velha.cpp
Usando o Clang (Linux ou macOS):
bash
Copiar código
clang++ -o jogo_velha jogo_velha.cpp
4. Rodar o Programa
Para rodar o programa, basta executar o arquivo compilado:

bash
Copiar código
./jogo_velha
Funcionalidades
Verificação de Vitória: A função verifica se há um vencedor em qualquer linha, coluna ou diagonal.
Empate: A função identifica se o tabuleiro está completo e sem vencedor (empate).
Jogo Indefinido: Se houver espaços vazios, o jogo é marcado como indefinido.
Jogo Impossível: Se houver um número de jogadas inconsistente (como mais Xs do que Os), a função retornará que o jogo é impossível.
Testes
Diversos cenários de teste foram realizados para garantir que a função VerificaVelha retorna os resultados corretos. A função foi testada em cenários que incluem:

Vencedor em Linha
Vencedor em Coluna
Vencedor em Diagonal
Empate (Tabuleiro completo, sem vencedor)
Jogo Indefinido (Existem espaços vazios)
Jogo Impossível (Regras violadas, como mais jogadas de X que O)
Exemplos de Matrizes de Teste
1. Vencedor em Linha (X vence)
cpp
Copiar código
int teste_vencedor_linha[3][3] = {
    {1, 1, 1},
    {2, 0, 2},
    {0, 0, 2}
};
Resultado esperado: 1 (Vencedor: X)

2. Vencedor em Coluna (O vence)
cpp
Copiar código
int teste_vencedor_coluna[3][3] = {
    {1, 2, 1},
    {2, 2, 1},
    {0, 2, 0}
};
Resultado esperado: 2 (Vencedor: O)

3. Vencedor em Diagonal (X vence)
cpp
Copiar código
int teste_vencedor_diagonal[3][3] = {
    {1, 2, 1},
    {2, 1, 2},
    {1, 2, 1}
};
Resultado esperado: 1 (Vencedor: X)

4. Empate
cpp
Copiar código
int teste_empate[3][3] = {
    {1, 2, 1},
    {2, 1, 2},
    {2, 1, 1}
};
Resultado esperado: 0 (Empate)

5. Jogo Indefinido
cpp
Copiar código
int teste_indefinido[3][3] = {
    {1, 2, 0},
    {2, 1, 0},
    {0, 1, 2}
};
Resultado esperado: -1 (Jogo Indefinido)

6. Jogo Impossível
cpp
Copiar código
int teste_impossivel[3][3] = {
    {1, 1, 1},
    {1, 2, 2},
    {1, 2, 2}
};
Resultado esperado: -2 (Jogo Impossível)

Licença
Este projeto está licenciado sob a MIT License.

Como você pode rodar o código e testá-lo:
Clonar o repositório.
Compilar o código com um compilador C++.
Executar o código compilado para ver os resultados dos testes.
Modificar as matrizes de entrada para testar diferentes cenários de jogo.
Este README.md fornece todos os detalhes necessários para compilar, configurar e testar o código. Ele também descreve como garantir que a lógica do jogo da velha funciona corretamente, incluindo verificações para vitória, empate, indefinição e casos impossíveis.