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

// Exibir os valores das variáveis
printf("Idade: %d\n", idade);
printf("Quantidade: %d\n", quantidade);
printf("Altura: %.2f\n", altura);
printf("Peso: %.2lf\n", peso);
printf("Letra: %c\n", letra);
printf("Nome: %s\n", nome);

return 0;
}
