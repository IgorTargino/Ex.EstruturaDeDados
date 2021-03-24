#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define VECTOR_SIZE 50

int sequential_search(int vector[VECTOR_SIZE], int item);

int main(){
    int A[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int B[25] = {25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};
    int C[VECTOR_SIZE], i=0, search, num;
    bool find  = false;

    for(i; i<25; i++){
        C[i] = A[i];
    }

    for(i=0; i<25; i++){
        C[i+25] = B[i];
    }

    printf("Digite um valor a ser pesquisado: ");
    scanf("%d", &num);
    search = sequential_search(C, num);
    if(search == -1) printf("%d Não foi localizado\n", num);
    else printf("%d Foi localizado na posição: %d\n", num, search+1);
}


int sequential_search(int vector[VECTOR_SIZE], int item)
{
    for (int i = 0; i < VECTOR_SIZE; i++) {

        if (vector[i] == item) {
            return i;
        }
    }

    return -1;
}