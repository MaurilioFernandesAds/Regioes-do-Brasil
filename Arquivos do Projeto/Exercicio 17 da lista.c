#include <stdio.h>
int main()
{
    int num =0,i, soma;
    printf("Soma dos primeiros números naturais");
    printf("\nDigite um número positivo: ");
    scanf("%d",&num);
    if(num<=0){
    printf("O número precisa inteiro e positivo\n");
    }
    for(i =1; i <= num; i++) {
    soma += i;
    }
    printf("\nA soma dos %d primeiros números naturais é %d",num,soma);
    
}