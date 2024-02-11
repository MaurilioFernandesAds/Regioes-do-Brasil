#include <stdio.h>
int main()
{
    int a, b, aux,cont, conta_primos = 0, i, divisor, soma_primos = 0;
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
        if(cont == 2){conta_primos++; soma_primos+=i; }
    }
    printf("\nExitem %d primos entre %d e %d", conta_primos,a,b);
    printf("\nA soma dos primos entre %d e %d vale %d",a,b,soma_primos);
}