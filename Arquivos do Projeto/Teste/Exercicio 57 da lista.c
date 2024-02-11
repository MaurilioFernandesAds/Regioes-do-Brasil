#include <stdio.h>
int main()
{
    int a, b, aux,cont, conta_primos = 0, i, divisor;
    printf("Numeros primos entre 2 numeros fornecidos pelo usuario");
    printf("\nDigite o 1º nº positivo: ");
    scanf("%d",&a);
    printf("\nDigite o 2º nº positivo: ");
    scanf("%d",&b);
    if(a > b){ // Algoritmo da troca de numeros
        aux=a;
        a=b;
        b=aux;
    }
    for(i=a; i <=b; i++){ // tratamos o intervalo de "a" ate "b"
    cont = 0;
        for(divisor = 1; divisor <=i; divisor++){
            if(i% divisor==0){cont++;}
        }
        if(cont == 2){conta_primos++; }
    }
    printf("\nExitem %d primos entre %d e %d", conta_primos,a,b);
}