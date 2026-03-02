#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main(){
    // Nível Novato - Movimentação das Peças
    // variaveis de incremento e movimento da peça
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int movimentotorre, movimentobispo, movimentorainha;

    // coleta do número de casas que irá movimentar, colocar 5 para torre (ou quantas quiser)
    printf("Digite quantas casas a torre anda!\n", movimentotorre);
    scanf("%d", &movimentotorre);

    // estrutura de repetição
    while (torre <= movimentotorre){ // enquanto torre for menor que o valor coletado em movimentotorre, faça

        //imprime o texto
        printf("Direita <--\n");
        // soma
        torre++;
    }
    
    // coleta do número de casas que irá movimentar, colocar 5 para bispo (ou quantas quiser)
    printf("Digite quantas casas o bispo anda!\n", movimentobispo);
    scanf("%d", &movimentobispo);

    // estrutura de repetição
    do
    {
        printf("Cima ^ Direita ->\n");// imprime o texto
        bispo++; // soma
    } while (bispo <= movimentobispo); // enquanto bispo for menor que o valor coletado volte e faça novamente


    // coleta do número de casas que irá movimentar, colocar 8 para rainha (ou quantas quiser)
    printf("Digite quantas casas a rainha anda!\n", movimentorainha);
    scanf("%d", &movimentorainha);


    // estrutura de repetição
    for (rainha = 1; rainha <= movimentorainha; rainha++){// para cada rainha menor que movimento rainha some rainha
        printf("Esquerda <--\n"); // imprimir o texto

    }// retorna até que atinja o numero citado no dado coletado

    return 0;
}



