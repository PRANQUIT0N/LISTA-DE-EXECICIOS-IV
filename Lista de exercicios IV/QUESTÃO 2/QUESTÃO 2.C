#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma_do_karai[5];

    printf("--- Cadastro do karai da Turma ---\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        printf("Nome dfa lenda: ");
        scanf(" %[^\n]", turma_do_karai[i].nome);
        
        printf("Idade: ");
        scanf("%d", &turma_do_karai[i].idade);
        
        printf("Nota: ");
        scanf("%f", &turma_do_karai[i].nota);
    }

    printf("\n--- Lista Geral do karai ---\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s | Idade: %d | Nota: %.2f\n", 
               turma_do_karai[i].nome, 
               turma_do_karai[i].idade, 
               turma_do_karai[i].nota);
    }

    return 0;
}