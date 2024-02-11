#include <stdio.h>
int main()
{
    int num =0,i, soma;
    printf("Soma dos primeiros números naturais");
    printf("\nDigite um número positivo: ");
    scanf("%d",&num);
    for(i =1; i <= num; i++) {
        soma += i; // soma = soma + i
    }
    printf("\nA soma dos %d primeiros numeros naturais é %d",num,soma);
    
}