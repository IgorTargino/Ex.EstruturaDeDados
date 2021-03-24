#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pilha
{
	int topo;
	int capa;
	char *pElem;
};

void criarpilha( struct Pilha *p, int c )
{
	p->topo = -1;
	p->capa = c;
	p->pElem = (char*) malloc (c * sizeof(char));
}

int estavazia (struct Pilha *p)
{

	if( p-> topo == -1 )

		return 1;
	else
		return 0;  
}

int estacheia (struct Pilha *p)
{
	if (p->topo == p->capa - 1)
		return 1;
	else
		return 0;
}

void empilhar (struct Pilha *p, char v)
{
	if (p->topo == p->capa - 1)
	{
	
	}
	else
	{
		p->topo++;
		p->pElem [p->topo] = v;
	}
}

char desempilhar (struct Pilha *p)
{
	if (p->topo == -1)
	{
		return 1;   
	}
	else
	{
		char aux = p->pElem [p->topo];
		p->topo--;
		return aux;
	}
}

char retornatopo (struct Pilha *p)
{
	return p->pElem [p->topo];
}

void imprimePilha(struct Pilha *p)
{
    int i;
    printf("Imprimindo a pilha: ");
    for (i = 0; i <= p->topo; i++)
    {
        printf("%c ", p->pElem[i]);
    }
    printf("\n");
}

int main()
{
	struct Pilha minhapilha;
	int qtd, i, k, tam, pilhas;

	scanf("%d", &qtd);
	for (i = 0; i < qtd; i++)
	{
		char mina[1001];
		scanf("%s", mina);
		tam = strlen(mina);
		pilhas = 0;
		criarpilha (&minhapilha, tam);
		for (k = 0; k < tam; k++)
		{

			if (mina[k] == '<'){
				empilhar(&minhapilha, mina[k]);
			}			

			else if (!estavazia (&minhapilha) && mina[k] == '>'){
				desempilhar(&minhapilha);
				pilhas++;			
			}
		}
		printf("%d\n", pilhas);
	}
	return 0;
}