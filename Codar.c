#include <stdio.h>


    int idade, matricula;
    float altura;
    char nome[20];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d" , &matricula);

    printf("Nome: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n" , altura);
    

    
    




    return 0;

    }