#include <stdio.h>

int main()
{
    int n_tests, i, k , n;
    long long unsigned int fib[64];


    scanf("%d", &n_tests);
   
    for(i = 1; i<=n_tests; i++)
    {   
        scanf("%d",&n);
        for( k=0 ; k<=n; k++)
        {   
            if(k<=1) fib[k] = k;
            else 
            {
                fib[k] = fib[k-1] + fib[k-2];
            }  
        }
        printf("Fib(%d) = %llu\n",n,fib[n]);
    }
    return 0;
}



