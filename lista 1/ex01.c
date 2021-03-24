#include <stdio.h>

int main() {

/* Declarando e iniciando os vetores; */

int a[5] = { 1, 2, 3, 4, 5};
int b[5] = { 6, 7, 8, 9, 10 };
int c[10];

/* Copia vetor 'a' para a primeira metade do vetor 'c' */
    for (int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
/* Copia vetor 'b' para a segunda metade do vetor 'c' */
    for (int j = 0; j < 5; j++) {
        c[j + 5] = b[j]; 
    }
/* Imprime todas as posições do vetor 'c' */
    for (int x = 0; x < 10; x++) {
        printf("%d, ", c[x]);
    }

}