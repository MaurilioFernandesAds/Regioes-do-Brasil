#include <stdio.h>
int main()
{
    int num, soma=0, qtde=0, maior, menor, soma_pares=0, cont_pares=0;
    float media, media_pares;
    printf("Vários Números - Cálculos Diversos");
    printf("\nDigite um nº inteiro ou 0 para terminar: ");
    scanf("%d",&num);
    maior = num;
    menor = num;
    while(num > 0){
        qtde++; //qtde = qtde + 1;
        soma += num; //soma = soma +num;
        if(num % 2 == 0){cont_pares++; soma_pares += num;}
        printf("Digite um nº inteiro ou 0 para terminar: ");
        scanf("%d",&num);
        if(num > maior) {maior = num;}
        else if(num < menor && num > 0){menor = num;}
    }
    media = soma / qtde;
    printf("\nForam digitados %d números",qtde);
    printf("\nA soma dos números digitados foi: %d",soma);
    printf("\nA media dos números digitados foi: %.2f",media);
    printf("\nMenor nº da coleção: %d",menor);
    printf("\nMaior nº da coleção: %d",maior);
    if(cont_pares > 0){
        media_pares = soma_pares / cont_pares;
        printf("\nMédia dos pares digitados: %.2f",media_pares);
    }
    else { printf("NÃO FORAM DIGITADOS NÚMEROS PARES");}
}