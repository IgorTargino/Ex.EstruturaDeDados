#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 10

typedef struct
{
    int dados[N];
    int topo;
} PILHA;

void inicializaPilha(PILHA *p)
{
    int i;
    for (i = 0; i < N; i++)
    {
        p->dados[i] = 0;
    }
    p->topo = 0;
}

void empilha(int dado, PILHA *p)
{
    if (p->topo == N)
    {
        printf("Pilha cheia.\n");
        return;
    }
    else
    {
        p->dados[p->topo] = dado;
        p->topo++;
        return;
    }
}

int desempilha(PILHA *p)
{
    if (p->topo == 0)
    {
        printf("Pilha vazia.\n");
        return -1;
    }
    else
    {
        printf("%d\n", p->topo);
        p->topo--;
        printf("%d\n", p->topo);
        return p->dados[p->topo];
    }
}

void imprimePilha(PILHA *p)
{
    int i;
    printf("Imprimindo a pilha:\n");
    for (i = 0; i < N; i++)
    {
        printf("%c ", p->dados[i]);
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    PILHA p1;
    char expressao[N];
    inicializaPilha(&p1);

    printf("Digite a expressão aritimética: ");
    scanf("%s", expressao);
    for (int i = 0; i < N; i++)
    {
        empilha(expressao[i], &p1);
    }
    imprimePilha(&p1);

    desempilha(&p1);

    imprimePilha(&p1);

    return 0;
}