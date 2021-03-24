#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Fila {

	int capacidade;
	int *dados;
	int primeiro;
	int ultimo;
	int nItens; 

}Fila;

void criarFila( Fila *f, int c ) { 

	f->capacidade = c;
	f->dados = (int*) malloc (f->capacidade * sizeof(int));
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0; 

}

void inserir(Fila *f, int v) {

	if(f->ultimo == f->capacidade-1)
		f->ultimo = -1;

	f->ultimo++;
	f->dados[f->ultimo] = v;
	f->nItens++; 

}

int remover( Fila *f ) {

	int temp = f->dados[f->primeiro++]; 

	if(f->primeiro == f->capacidade)
		f->primeiro = 0;
		return;

	f->nItens--;  
	return temp;

}

int estaVazia( Fila *f ) { 

	return (f->nItens==0);

}

int estaCheia( Fila *f ) { 

	return (f->nItens == f->capacidade);
}

void mostrarFila(struct Fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiro; cont < f->nItens; cont++){

		printf("%d\t",f->dados[i++]);

		if (i == f->capacidade)
			i=0;

	}
	printf("\n\n");

}

int main()
{	
	srand (time(NULL));
    int seg = 0;                 //  Variável que representa os segundos
    int min = 0;                //   Variável que representa os minutos
    int ms = 0;            		//    Variável que representa a "velocidade" do cronometro.
	int seg1, seg2, seg3, seg4, seg5, seg6, segSaida = 0;           
	int rand1 = rand() % 25 + 15;
	int rand2 = rand() % 10 + 6;
	int rand3 = rand() % 5 + 3;
	int rand4 = rand() % 10 + 8;
	int rand5 = rand() % 20 + 15;
	int rand6 = rand() % 30 + 5;
	int segTotal = 0;
	int numFuncionarios;

	Fila alunos;
	Fila tempoChegada;
	Fila tempoSaida;

	criarFila(&alunos, 1000);
	criarFila(&tempoChegada, 1000);
	criarFila(&tempoSaida, 1000);
	printf("Digite o numero de funcionarios: ");
	scanf("%d", &numFuncionarios);
    for(seg,min;min < 60;seg++)
    {
		if(min < 30){
			if(min < 15){
				seg1++;
				if(seg1 == rand1){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg1 = 0;
					rand1 = rand() % 25 + 15;
				}
			}else if(min < 25 && min > 15){
				seg2++;
				if(seg2 == rand2){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg2 = 0;
					rand2 = rand() % 10 + 6;
				}
			}else if(min < 30 && min > 25){
				seg3++;
				if(seg3 == rand3){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg3 = 0;
					rand3 = rand() % 5 + 3;
				}
			}

		}else{
			if(min < 40 && min > 30){
				seg4++;
				if(seg4 == rand4){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg4 = 0;
					rand4 = rand() % 10 + 8;
				}
			}else if(min < 50 && min > 40){
				seg5++;
				if(seg5 == rand5){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg5 = 0;
					rand5 = rand() % 20 + 15;
				}
			}else{
				seg6++;
				if(seg6 == rand6){
					segTotal = seg + 60*min;
					inserir(&alunos, 1);
					inserir(&tempoChegada, segTotal);
					seg6 = 0;
					rand6 = rand() % 30 + 5;
				}
			}
			segSaida++;
			if(segSaida == 4){
				segSaida = 0;
				if(estaVazia(&alunos) == 1){
					break;
				}else{
					segTotal = seg + 60*min;
					for(int i=0; i<numFuncionarios; i++){
						remover(&alunos);
						inserir(&tempoSaida, segTotal);				
					}
				}
			}	
		}
        if(seg==60)
        {
            min++;
            seg=0;
        }

    }
	printf("\nTempo médio de espera: %d segundos\n", alunos.ultimo/4*numFuncionarios);
	printf("Total de atendidos: %d\n", tempoSaida.nItens);
	printf("Numero Maximo de alunos na fila: %d\n", alunos.ultimo);

    return 0;
}

