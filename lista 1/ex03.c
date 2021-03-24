#include <stdio.h>

int main(){

    int N, i;
    int sucessor[2], antecessor[2];

    printf("Digite um número inteiro: ");
    scanf("%d", &N);
    for(i=0;i<2;i++)
    {
        sucessor[i] = N+i+1;
        antecessor[i] = N-i-1;
    }

    printf("\n ******************* Saida de Dados ********************* \n");
    printf("\nDois primeiros sucessores de %d: [%d,%d]\n", N, sucessor[0], sucessor[1]);
    printf("\nDois primeiros antecessores de %d: [%d,%d]\n", N, antecessor[0], antecessor[1]);
}