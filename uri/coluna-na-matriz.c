#include <stdio.h>

int main()
{
    double a=0.0, M[12][12];
    char T;
    int C,x,y;

    scanf("%d", &C);
    scanf("%s", &T);

    for(x=0; x<=11; x++)
    {
        for(y=0; y<=11; y++)
        {
            scanf("%lf", &M[x][y]);
            if(y==C)
            {
                a+=M[x][y];
            } 
        }
    }

    if(T=='S')
    {
        printf("%.1lf\n",a);
    } 

    else if(T=='M')
    {
        a=a/12.00;
        printf("%.1lf\n",a);
    }
    
    return 0;
}