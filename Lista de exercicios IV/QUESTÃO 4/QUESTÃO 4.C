#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

struct Aluno turma_do_karai[4];
int qtd_lendas = 0;

void criar_aluno() {
    if (qtd_lendas >= 4) {
        printf("\nA turma ta cheia pra dedeu!\n");
        return;
    }

    printf("\n--- Novo Aluno ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", turma_do_karai[qtd_lendas].nome);
    
    printf("Idade: ");
    scanf("%d", &turma_do_karai[qtd_lendas].idade);
    
    printf("Nota: ");
    scanf("%f", &turma_do_karai[qtd_lendas].nota);

    qtd_lendas++;
    printf("karai cadastrado com sucesso!\n");
}

void exibir_alunos() {
    if (qtd_lendas == 0) {
        printf("\nNao tem ninguem nessa bagaca ainda.\n");
        return;
    }

    printf("\n--- Lista da Turma ---\n");
    for (int i = 0; i < qtd_lendas; i++) {
        printf("[%d] %s | %d anos | Nota: %.2f\n", 
               i, turma_do_karai[i].nome, turma_do_karai[i].idade, turma_do_karai[i].nota);
    }
}

void remover_aluno() {
    int indice;
    
    exibir_alunos();
    
    if (qtd_lendas == 0) return;

    printf("\nQual o numero (indice) do maluco pra remover? ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= qtd_lendas) {
        printf("Indice errado do karai!\n");
        return;
    }

    for (int i = indice; i < qtd_lendas - 1; i++) {
        turma_do_karai[i] = turma_do_karai[i + 1];
    }

    qtd_lendas--;
    printf("Aluno removido da kacetada.\n");
}

int main() {
    int opcao_karai = 0;

    while (opcao_karai != 4) {
        printf("\n=== MENU DA BAGACA ===\n");
        printf("1 - Criar Aluno\n");
        printf("2 - Exibir Turma\n");
        printf("3 - Remover Aluno\n");
        printf("4 - Vazar\n");
        printf("Escolhe ai: ");
        scanf("%d", &opcao_karai);

        switch (opcao_karai) {
            case 1:
                criar_aluno();
                break;
            case 2:
                exibir_alunos();
                break;
            case 3:
                remover_aluno();
                break;
            case 4:
                printf("Falou karai...\n");
                break;
            default:
                printf("Opcao nada a ver, tenta de novo.\n");
        }
    }

    return 0;
}