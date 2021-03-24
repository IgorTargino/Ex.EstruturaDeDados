#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[35];
    char endereco[50];
    char situacao;
    int telefone;
}Agenda;

void registrar_contato( Agenda lista_de_contatos[], int tamanho){
    printf("\n******************** REGISTRAR CONTATOS ********************\n");
    int i;
    for(i=0; i<tamanho; i++){
        printf("\nContato número %d\n", i+1);
        printf("Nome do contato: ");
        scanf(" %[^\n]", lista_de_contatos[i].nome);
        getchar();
        printf("Endereço do contato: ");
        scanf(" %[^\n]", lista_de_contatos[i].endereco);
        getchar();
        printf("Telefone do contato: ");
        scanf(" %d", &lista_de_contatos[i].telefone);
        printf("Situação do contato: ");
        scanf(" %c", &lista_de_contatos[i].situacao);
    }
}

void pesquisar_contato( Agenda lista_de_contatos[], int tamanho){
    int i;
    char pesquisar_contato[35];
    printf("\n******************** PESQUISAR CONTATO ********************\n");
    printf("Insira o nome completo do contato que deseja pesquisar: ");
    scanf(" %[^\n]", pesquisar_contato);
    for(i=0; i<tamanho; i++){
        if(strcmp(pesquisar_contato, lista_de_contatos[i].nome)==0){
            printf("Contato %s encontrado na posição %d\n", lista_de_contatos[i].nome, i);
            return;
        }
    }
    printf("Contato não encontrado\n");

}

void mostrar_contatos( Agenda lista_de_contatos[], int tamanho){
    printf("\n******************** LISTA DE CONTATOS ********************\n");
    int i;
    for(i=0; i<tamanho; i++){
        printf("Posição %d | Contato: %s | Endereço: %s | Telefone: %d | Situação: %c\n", i,
        lista_de_contatos[i].nome,
        lista_de_contatos[i].endereco,
        lista_de_contatos[i].telefone,
        lista_de_contatos[i].situacao);
    }

}

void alterar_contatos( Agenda lista_de_contatos[], int tamanho){
    int num, pos;
    printf("\n******************** EDITAR CONTATOS ********************\n");
    printf("1 - Editar Nome.\n");
    printf("2 - Editar Endereço.\n");
    printf("3 - Editar Telefone.\n");
    printf("4 - Editar Situação.\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        mostrar_contatos(lista_de_contatos, tamanho);
        printf("Digite a posição do contato que queira editar: ");
        scanf(" %d", &pos);
        printf("Digite o novo nome do contato: ");
        scanf(" %[^\n]", lista_de_contatos[pos].nome);
        printf("Nome alterado com sucesso.\n");
        break;
    case 2:
        mostrar_contatos(lista_de_contatos, tamanho);
        printf("Digite a posição do contato que queira editar: ");
        scanf(" %d", &pos);
        printf("Digite o novo endereço do contato: ");
        scanf(" %[^\n]", lista_de_contatos[pos].endereco);
        printf("Endereço alterado com sucesso.\n");
        break;

    case 3:
        mostrar_contatos(lista_de_contatos, tamanho);
        printf("Digite a posição do contato que queira editar: ");
        scanf(" %d", &pos);
        printf("Digite o novo telefone do contato: ");
        scanf(" %d", &lista_de_contatos[pos].telefone);
        printf("Endereço alterado com sucesso.\n");
        break;
    
    case 4:
        mostrar_contatos(lista_de_contatos, tamanho);
        printf("Digite a posição do contato que queira editar: ");
        scanf(" %d", &pos);
        printf("Digite a nova situação do contato: ");
        scanf(" %c", &lista_de_contatos[pos].situacao);
        printf("Endereço alterado com sucesso.\n");
        break;

    default:
        printf("Nenhuma opção selecionada.");
        break;
    }

}

int main(){
    int tamanho = 5;
    int escolha = 0;
    Agenda lista_de_contatos[tamanho];

    while(1==1){
        printf("\n******************** MENU ********************\n");
        printf("1 - Inserir os 5 registros.\n");
        printf("2 - Pesquisar um dos 5 registros de cada vez pelo campo nome.\n");
        printf("3 - Alterar campos de um registro.\n");
        printf("4 - Sair do programa de cadastro.\n");
        printf("Digite o numero da opcao desejada: ");
        scanf("%d", &escolha);  
        switch (escolha){
            case 1:
            {
                registrar_contato(lista_de_contatos, tamanho);
                break;
            }
            case 2:
            {
                pesquisar_contato(lista_de_contatos, tamanho);
                break;
            }
            case 3:
            {
                alterar_contatos(lista_de_contatos, tamanho);
                break;
            }
            case 4:
            {
                return 0;
                break;
            }
            default:
            {   
                mostrar_contatos(lista_de_contatos,tamanho);
                break;
            }
        }
    }
    return 0;
}