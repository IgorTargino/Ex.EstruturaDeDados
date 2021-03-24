#include <stdlib.h>
#include <stdio.h>

#define VECTOR_SIZE 30

int binary_search(int vector[VECTOR_SIZE], int item);

int main(){
    int i=0, num,find, e = 0,d=30, m;
    int Vetor[VECTOR_SIZE];

    for(i; i<VECTOR_SIZE; i++){
        Vetor[i] = i+1;
    }

    printf("Digite um valor a ser pesquisado: ");
    scanf("%d", &find);
    m = binary_search(Vetor, find);
    if(m == -1) printf("%d Não foi localizado\n", find);
    else printf("%d Foi localizado na posição: %d\n", find, m+1);
}


int binary_search(int vector[VECTOR_SIZE], int item)
{
    int begin = 0;
    int end = VECTOR_SIZE - 1;

    while (begin <= end) {  /* Condição de parada */

        int i = (begin + end) / 2;  /* Calcula o meio do sub-vetor */

        if (vector[i] == item) {  /* Item encontrado */
            return i;
        }

        if (vector[i] < item) {  /* Item está no sub-vetor à direita */
            begin = i + 1;
        } else {  /* vector[i] > item. Item está no sub-vetor à esquerda */
            end = i;
        }
    }

    return -1;
}