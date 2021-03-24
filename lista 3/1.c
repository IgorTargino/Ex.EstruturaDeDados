#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[35];
	char sexo;
	int n_pecas;
}Funcionario;

void print_m(Funcionario lista_de_funcionario[], int tamanho){
    int n_pecas_m = 0;

    for( int i=0; i<tamanho; i++){
        if( lista_de_funcionario[i].sexo == 'M'){
            n_pecas_m += lista_de_funcionario[i].n_pecas;
        }
    }
    printf("Quantidade de pecas produzidas pelos homens: %d\n", n_pecas_m);
}

void print_f(Funcionario lista_de_funcionario[], int tamanho){
    int n_pecas_f = 0;

    for( int i=0; i<tamanho; i++){
        if( lista_de_funcionario[i].sexo == 'F'){
            n_pecas_f += lista_de_funcionario[i].n_pecas;
        }
    }
    printf("Quantidade de pecas produzidas pelas mulheres: %d\n", n_pecas_f);
}

int func_maior_qtd(Funcionario lista_de_funcionario[], int tamanho){
    int maior_qtd = 0;
    int indice;
    
    for( int i=0; i<tamanho; i++){
        if(maior_qtd < lista_de_funcionario[i].n_pecas){
            maior_qtd = lista_de_funcionario[i].n_pecas;
            indice = i;
        }
    }

    return indice;
}




int main(){
    int tamanho, i, indice;
    printf("Numero de funcionarios: ");
    scanf("%d", &tamanho);
    Funcionario lista_de_funcionarios[tamanho];

	for(i=0 ;i<tamanho ;i++){
		printf("Nome do funcionario[%d]: ", i);
		scanf(" %[^\n]" , lista_de_funcionarios[i].nome);
        getchar();
		printf("Sexo do funcionario[%d]: ", i);
		scanf("%c" , &lista_de_funcionarios[i].sexo);
		printf("Quantidade de peças produzidas pelo funcionario[%d]: ", i);
		scanf("%d" , &lista_de_funcionarios[i].n_pecas);
	}

    print_f(lista_de_funcionarios, tamanho);
    print_m(lista_de_funcionarios, tamanho);
    indice = func_maior_qtd(lista_de_funcionarios, tamanho);
    printf("O funcionário que produziu o maior número de peças é %s\n com um total de %d peças feitas.\n", lista_de_funcionarios[indice].nome, lista_de_funcionarios[indice].n_pecas);

    return 0;
}