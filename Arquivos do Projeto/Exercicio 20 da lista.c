#include <stdio.h>
int main()
{
    int num, cont = 0, cont_par = 0;
    printf("Sequência de números inteiros - quantos são pares?");
    printf("\nDigite um nº inteiro positivo ou 1000 para terminar: ");
    scanf("%d",&num);
    while (num !=1000){
        cont++; // Conto a quantidade de números válidos
        if(num % 2 ==0){ cont_par++; }
        printf("\nDigite um nº inteiro positivo ou 1000 para terminar: ");
        scanf("%d",&num);
    }
    printf("\nForam digitados %d números, em total",cont);
    printf("\nForam digitados %d números pares",cont_par);
}