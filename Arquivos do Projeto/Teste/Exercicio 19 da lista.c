#include <stdio.h>

int main()
{
    int num, c, d, u;
    printf("Decomposição dos algarismos de um número de 3 dígitos");
    printf("\nDigite um número entre 100 e 999: ");
    scanf("%d",&num);
    if(num >= 100 && num <= 999){
        c = num / 100;
        d = (num % 100) /10;
        u = (num % 100) % 10;
    printf("\nNúmero lido =%d",num);
    printf("\nAlgarismo da Centena =%d",c);
    printf("\nAlgarismo da Dezena =%d",d);
    printf("\nAlgarismo da Unidade =%d",u);
}
    else {printf("\nNúmero Inválido!");}
 
}
