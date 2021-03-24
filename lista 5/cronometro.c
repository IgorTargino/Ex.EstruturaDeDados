#include <stdio.h>
#include <stdlib.h>

int main()
{

    int seg = 0;                 //  Variável que representa os segundos
    int mim = 30;                //   Variável que representa os minutos
    int ms = 1;            //    Variável que representa a "velocidade" do cronometro.
    int hor= 0;              //     Variável que representa as horas

    for(seg,mim;;seg--)
    {
        if(mim==0 && seg==0)
        {
            system("clear");
            printf("O tempo acabou !");
        }
        system("clear");
        printf("\n\n%02d:%02d",hor,mim,seg);
        sleep(ms);

        if(seg==0)
        {
            mim--;
            seg=60;
        }

    }

    return 0;
}