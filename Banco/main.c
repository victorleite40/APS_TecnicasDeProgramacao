#include <stdlib.h>
#include <stdio.h>

int main() {

    int opcao=0;

    while(opcao != 9){
        printf("=== Menu do Banco ===");
        printf("\n1 - Cadastrar Cliente");
        printf("\n2 - Cadastrar Conta");
        printf("\n3 - Listar Conta");
        printf("\n4 - Pesquisar Conta");
        printf("\n5 - Depositar");
        printf("\n6 - Debitar (Sacar)");
        printf("\n7 - Transferir");
        printf("\n8 - Remover Conta");
        printf("\n9 - Sair");
        printf("\nEscolha uma opcao: ");

        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
                // Cadastrar Cliente
                break;
            case 2:
                // Cadastrar Conta
                break;
            case 3:
                // Listar Conta
                break;
            case 4:
                // Pesquisar Conta
                break;
            case 5:
                // Depositar
                break;
            case 6:
                // Debitar (Sacar)
                break;
            case 7:
                // Transferir
                break;
            case 8:
                // Remover Conta
                break;
            case 9:
                // Sair
                break;
            default:
                printf("Erro, opcao inválida");
                break;
        }
    }

    return 0;
}
