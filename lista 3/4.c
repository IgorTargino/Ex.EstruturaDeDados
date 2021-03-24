#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[35], endereco[50], situacao;
    int telefone;
}Agenda;


int main(){
    int tamanho = 5;
    Agenda lista_agenda[tamanho];

    return 0;
}