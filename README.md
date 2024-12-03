# Jogo da Velha - Implementação e Testes

Este repositório contém a implementação de um **Jogo da Velha** em **C++**. O objetivo do projeto foi criar uma função que verifica o estado de um jogo da velha, determinando o vencedor (se houver), se o jogo terminou em empate, se está indefinido ou se é impossível de ser jogado devido a violações das regras. A função foi implementada utilizando a metodologia **Test-Driven Development (TDD)** e testada com diversos cenários.

## Sumário

1. [Descrição do Jogo](#descrição-do-jogo)
2. [Requisitos](#requisitos)
3. [Como Baixar e Configurar](#como-baixar-e-configurar)
4. [Funcionalidades](#funcionalidades)
5. [Testes](#testes)


## Descrição do Jogo

O Jogo da Velha é um jogo de tabuleiro simples onde dois jogadores (um usando o símbolo `X` e o outro usando o símbolo `O`) alternam entre marcar suas posições no tabuleiro 3x3 até que um dos jogadores vença ou o jogo termine em empate.

### Objetivo da Função

A função `VerificaVelha` recebe uma matriz 3x3 de inteiros representando o tabuleiro, com os seguintes valores:

- **0**: posição vazia
- **1**: posição marcada por `X`
- **2**: posição marcada por `O`

A função realiza a seguinte verificação:

- **Retorna 1** se o vencedor foi o `X` (1).
- **Retorna 2** se o vencedor foi o `O` (2).
- **Retorna 0** se o jogo terminou em empate.
- **Retorna -1** se o jogo está indefinido (ainda há espaços vazios).
- **Retorna -2** se o jogo é impossível pelas regras (violações como o número de jogadas de `X` e `O` incoerentes).

## Requisitos

- **C++**: O código foi implementado em C++ e pode ser compilado com qualquer compilador moderno de C++ (GCC, Clang, Visual Studio, etc.).
- **Sistemas Operacionais**: O projeto foi testado em Linux e Windows, mas pode ser facilmente configurado em qualquer sistema operacional que suporte C++.

## Como Baixar e Configurar

### 1. Clonar o Repositório

Primeiro, você deve clonar o repositório para sua máquina local. Use o comando Git:

git clone https://github.com/seu-usuario/jogo-da-velha.git

### 2. Navegar até o Diretório do Projeto

Entre no diretório do projeto:

cd TDD_VELHA

### 3. Compilar o Código

O código pode ser compilado com o compilador C++ de sua preferência. Aqui estão alguns exemplos:

## Funcionalidades

- **Verificação de Vitória**: A função verifica se há um vencedor em qualquer linha, coluna ou diagonal.
- **Empate**: A função identifica se o tabuleiro está completo e sem vencedor (empate).
- **Jogo Indefinido**: Se houver espaços vazios, o jogo é marcado como indefinido.
- **Jogo Impossível**: Se houver um número de jogadas inconsistente (como mais `X`s do que `O`s), a função retornará que o jogo é impossível.

## Testes

Diversos cenários de teste foram realizados para garantir que a função **`VerificaVelha`** retorna os resultados corretos. A função foi testada em cenários que incluem:

1. Vencedor em Linha
2. Vencedor em Coluna
3. Vencedor em Diagonal
4. Empate (Tabuleiro completo, sem vencedor)
5. Jogo Indefinido (Existem espaços vazios)
6. Jogo Impossível (Regras violadas, como mais jogadas de `X` que `O`)





