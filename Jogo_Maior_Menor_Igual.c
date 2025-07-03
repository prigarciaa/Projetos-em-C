#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gera número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 +1; // Número entre 1 e 100
    
    //Inicio do jogo

    printf("Bem-Vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("\nVocê deve escolher um numero e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:\n");
    scanf("%c" , &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100):\n");
    scanf("%d", &numeroJogador);

    // Exibir numero do computador
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;  
        
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;   
    
    default:
    printf("Opção do jogo inválida.\n");
        break;
    }

    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1 )
    {
        printf(" Parabéns, você ganhou!\n");
    } else{
        printf("Infelizmente, você perdeu!\n");
    }
    
       

   
    
    




















}