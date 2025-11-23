#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma_do_karai[5] = {
        {"Ze da Manga", 20, 5.5},
        {"Maria Kacetada", 22, 8.0},
        {"Jorginho Gameplay", 19, 3.2},
        {"Ana do Karai", 21, 9.5},
        {"Pedrinho Bala", 20, 6.0}
    };

    int indice_lenda;
    float nova_nota_kacetada;

    printf("--- Lista da Turma ---\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d] %s - Nota atual: %.2f\n", i, turma_do_karai[i].nome, turma_do_karai[i].nota);
    }

    printf("\nDigite o numero (indice) do aluno pra mudar a nota (0 a 4): ");
    scanf("%d", &indice_lenda);


    if (indice_lenda < 0 || indice_lenda > 4) {
        printf("Indice invalido do karai! Reinicia essa bagaca.\n");
        return 1;
    }

    printf("Manda a nova nota pra %s: ", turma_do_karai[indice_lenda].nome);
    scanf("%f", &nova_nota_kacetada);

 
    turma_do_karai[indice_lenda].nota = nova_nota_kacetada;

    printf("\n--- Dados Atualizados na Kacetada ---\n");
    printf("Nome: %s\n", turma_do_karai[indice_lenda].nome);
    printf("Idade: %d anos\n", turma_do_karai[indice_lenda].idade);
    printf("Nota Nova: %.2f\n", turma_do_karai[indice_lenda].nota);

    return 0;
}