<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo da Velha - Implementação e Testes</title>
</head>
<body>
    <h1>Jogo da Velha - Implementação e Testes</h1>
    
    <p>Este repositório contém a implementação de um <strong>Jogo da Velha</strong> em <strong>C++</strong>. O objetivo do projeto foi criar uma função que verifica o estado de um jogo da velha, determinando o vencedor (se houver), se o jogo terminou em empate, se está indefinido ou se é impossível de ser jogado devido a violações das regras. A função foi implementada utilizando a metodologia <strong>Test-Driven Development (TDD)</strong> e testada com diversos cenários.</p>
    
    <h2>Sumário</h2>
    <ol>
        <li><a href="#descricao-do-jogo">Descrição do Jogo</a></li>
        <li><a href="#requisitos">Requisitos</a></li>
        <li><a href="#como-baixar-e-configurar">Como Baixar e Configurar</a></li>
        <li><a href="#funcionalidades">Funcionalidades</a></li>
        <li><a href="#testes">Testes</a></li>
        <li><a href="#exemplos-de-matrizes-de-teste">Exemplos de Matrizes de Teste</a></li>
        <li><a href="#licenca">Licença</a></li>
    </ol>

    <h2 id="descricao-do-jogo">Descrição do Jogo</h2>
    <p>O Jogo da Velha é um jogo de tabuleiro simples onde dois jogadores (um usando o símbolo <code>X</code> e o outro usando o símbolo <code>O</code>) alternam entre marcar suas posições no tabuleiro 3x3 até que um dos jogadores vença ou o jogo termine em empate.</p>

    <h3>Objetivo da Função</h3>
    <p>A função <code>VerificaVelha</code> recebe uma matriz 3x3 de inteiros representando o tabuleiro, com os seguintes valores:</p>
    <ul>
        <li><code>0</code>: posição vazia</li>
        <li><code>1</code>: posição marcada por <code>X</code></li>
        <li><code>2</code>: posição marcada por <code>O</code></li>
    </ul>
    <p>A função realiza a seguinte verificação:</p>
    <ul>
        <li><strong>Retorna 1</strong> se o vencedor foi o <code>X</code> (<code>1</code>).</li>
        <li><strong>Retorna 2</strong> se o vencedor foi o <code>O</code> (<code>2</code>).</li>
        <li><strong>Retorna 0</strong> se o jogo terminou em empate.</li>
        <li><strong>Retorna -1</strong> se o jogo está indefinido (ainda há espaços vazios).</li>
        <li><strong>Retorna -2</strong> se o jogo é impossível pelas regras (violações como o número de jogadas de <code>X</code> e <code>O</code> incoerentes).</li>
    </ul>

    <h2 id="requisitos">Requisitos</h2>
    <p><strong>C++</strong>: O código foi implementado em C++ e pode ser compilado com qualquer compilador moderno de C++ (GCC, Clang, Visual Studio, etc.).</p>
    <p><strong>Sistemas Operacionais</strong>: O projeto foi testado em Linux e Windows, mas pode ser facilmente configurado em qualquer sistema operacional que suporte C++.</p>

    <h2 id="como-baixar-e-configurar">Como Baixar e Configurar</h2>
    <h3>1. Clonar o Repositório</h3>
    <p>Primeiro, você deve clonar o repositório para sua máquina local. Use o comando Git:</p>
    <pre><code>git clone https://github.com/seu-usuario/jogo-da-velha.git</code></pre>

    <h3>2. Navegar até o Diretório do Projeto</h3>
    <p>Entre no diretório do projeto:</p>
    <pre><code>cd jogo-da-velha</code></pre>

    <h3>3. Compilar o Código</h3>
    <p>O código pode ser compilado com o compilador C++ de sua preferência. Aqui estão alguns exemplos:</p>
    <ul>
        <li><strong>Usando o GCC (Linux ou Windows com MinGW):</strong></li>
        <pre><code>g++ -o jogo_velha jogo_velha.cpp</code></pre>

        <li><strong>Usando o Clang (Linux ou macOS):</strong></li>
        <pre><code>clang++ -o jogo_velha jogo_velha.cpp</code></pre>
    </ul>

    <h3>4. Rodar o Programa</h3>
    <p>Para rodar o programa, basta executar o arquivo compilado:</p>
    <pre><code>./jogo_velha</code></pre>

    <h2 id="funcionalidades">Funcionalidades</h2>
    <ul>
        <li><strong>Verificação de Vitória:</strong> A função verifica se há um vencedor em qualquer linha, coluna ou diagonal.</li>
        <li><strong>Empate:</strong> A função identifica se o tabuleiro está completo e sem vencedor (empate).</li>
        <li><strong>Jogo Indefinido:</strong> Se houver espaços vazios, o jogo é marcado como indefinido.</li>
        <li><strong>Jogo Impossível:</strong> Se houver um número de jogadas inconsistente (como mais <code>X</code>s do que <code>O</code>s), a função retornará que o jogo é impossível.</li>
    </ul>

    <h2 id="testes">Testes</h2>
    <p>Diversos cenários de teste foram realizados para garantir que a função <code>VerificaVelha</code> retorna os resultados corretos. A função foi testada em cenários que incluem:</p>
    <ul>
        <li>Vencedor em Linha</li>
        <li>Vencedor em Coluna</li>
        <li>Vencedor em Diagonal</li>
        <li>Empate (Tabuleiro completo, sem vencedor)</li>
        <li>Jogo Indefinido (Existem espaços vazios)</li>
        <li>Jogo Impossível (Regras violadas, como mais jogadas de <code>X</code> que <code>O</code>)</li>
    </ul>

    <h2 id="exemplos-de-matrizes-de-teste">Exemplos de Matrizes de Teste</h2>

    <h3>1. Vencedor em Linha (X vence)</h3>
    <pre><code>int teste_vencedor_linha[3][3] = {
    {1, 1, 1},
    {2, 0, 2},
    {0, 0, 2}
};</code></pre>
<p>Resultado esperado: <strong>1</strong> (Vencedor: X)</p>

    <h3>2. Vencedor em Coluna (O vence)</h3>
    <pre><code>int teste_vencedor_coluna[3][3] = {
    {1, 2, 1},
    {2, 2, 1},
    {0, 2, 0}
};</code></pre>
<p>Resultado esperado: <strong>2</strong> (Vencedor: O)</p>

    <h3>3. Vencedor em Diagonal (X vence)</h3>
    <pre><code>int teste_vencedor_diagonal[3][3] = {
    {1, 2, 1},
    {2, 1, 2},
    {1, 2, 1}
};</code></pre>
<p>Resultado esperado: <strong>1</strong> (Vencedor: X)</p>

    <h3>4. Empate</h3>
    <pre><code>int teste_empate[3][3] = {
    {1, 2, 1},
    {2, 1, 2},
    {2, 1, 1}
};</code></pre>
<p>Resultado esperado: <strong>0</strong> (Empate)</p>

    <h3>5. Jogo Indefinido</h3>
    <pre><code>int teste
