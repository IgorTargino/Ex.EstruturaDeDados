#include <stdio.h>

int main()
{
    int N, min, pos_m, i;

    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++)
    {
       scanf("%d", &v[i]); 
    } 

    min = v[0];
    for(i=0; i<N; i++)
    {
        if(min >= v[i]) 
        {
            min=v[i];
            pos_m=i;
        }

    }
    printf("Menor valor: %d\nPosicao: %d\n",min, pos_m);
    return 0;
}   