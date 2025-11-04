#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    char nomeProduto[50];
    float preco;
    int quantidade;

    while (1) {
        printf("=== MENU DE ESTOQUE ===\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("Nome do produto: ");
            fgets(nomeProduto, 50, stdin);
            printf("Preco: ");
            scanf("%f", &preco);
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            getchar();
            printf("Produto cadastrado com sucesso!\n\n");
        } 
        else if (opcao == 2) {
            printf("Listando produtos cadastrados...\n\n");
        } 
        else if (opcao == 3) {
            printf("Saindo do sistema...\n");
            break;
        } 
        else {
            printf("Opcao invalida!\n\n");
        }
    }

    return 0;
}
