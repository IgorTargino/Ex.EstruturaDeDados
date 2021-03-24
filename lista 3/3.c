#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[35];
	float nota[3];
	
}Aluno;


void registra_aluno(Aluno lista_de_aluno[], int tamanho){
    int c, i;
    for(i=0; i<tamanho; i++){
        c=0;
        printf("Nome do aluno: ");
		scanf(" %[^\n]", lista_de_aluno[i].nome);
        getchar();
        while(c<3){
            if(c==2) printf("Nota da FINAL: ");
            else printf("Nota da AP%d: ", c+1);
            scanf("%f", &lista_de_aluno[i].nota[c]);
            c++;
        }
    }
}

void print_aluno(Aluno lista_de_aluno[], int tamanho){
    int c=0,i;
    for(i=0; i<tamanho; i++){
        printf("Aluno: %s | AP1: %0.2f | AP2: %0.2f | FINAL: %0.2f\n", 
        lista_de_aluno[i].nome, 
        lista_de_aluno[i].nota[0],
        lista_de_aluno[i].nota[1],
        lista_de_aluno[i].nota[2]
        );
    }
}
int main(){
    int tamanho = 2;
    Aluno lista_de_aluno[tamanho];
    registra_aluno(lista_de_aluno,tamanho);
    print_aluno(lista_de_aluno, tamanho);
    return 0;
}