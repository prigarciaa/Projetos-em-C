#include <stdio.h>

int main(){
    
    int idade = 37;
    int quantidade = 1;
    float altura = 1.68;
    double peso = 75;
    char letra = 'A';
    char nome[20] = "priscila";

    idade = 37;
    quantidade = 1;

    //sintaxe scanf
    //scanf("formato1" "formato2, &variavel1, variavel2, ...);
    printf("Entre com sua idade\n");
    scanf("%d" , &idade);
    printf("Idade: %d\n" , idade);
    printf("Entre com sua altura\n");
    scanf("%f" , &altura);
    printf("Entre com a opcao\n");
}