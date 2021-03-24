#include <stdio.h>

int main() {

    int i,j,k;

    int a[5][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16},
                   {17,18,19,20}};

    int b[4][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9},
                   {10,11,12}};

    int c[5][3]={};

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            for(k= 0; k < 4; k++){
                c[i][j] = a[i][k]*b[k][j] + c[i][j];
            }
        }
    }

    for (i = 0; i < 5; i++){
        for(j=0 ; j < 3; j++){
            printf("c[%d][%d] = %d ", i, j, c[i][j]);
            };
        printf("\n");
        };

    return 0;
}