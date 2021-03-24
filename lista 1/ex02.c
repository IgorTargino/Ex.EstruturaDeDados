#include <stdio.h>

int main()
{
    int a[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int b[5][3] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int c[2][15];
    int ia, ja, ib, jb, ic, jc;
    int i, j, x=0, y=0;

    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            c[0][x] = a[i][j]; 
            x++;
        }     
    }

    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            c[1][y] = b[i][j]; 
            y++;
        }     
    }

    printf("\n ******************* Saida de Dados ********************* \n");

    printf("\nElementos de 'A'\n");

    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf("\n A[%d][%d] = %d",i,j,a[i][j]);
        }     
    }

    printf("\n\n******************************************************** \n\n");

    printf("\nElementos de 'B'\n");

    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf("\n B[%d][%d] = %d",i,j,b[i][j]);
        }     
    }

    printf("\n\n******************************************************** \n\n");

    printf("\nElementos de 'C'\n");

    for(i=0; i<2; i++){
        for(j=0;j<15;j++){
            printf("\nC[%d][%d] = %d", i,j,c[i][j]);
        }
    }
    printf("\n\n******************************************************** \n\n");

    return 0;
}