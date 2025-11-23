#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // iniciando o karai  
    struct Aluno aluno_karai = {"Jorginho Gameplay", 21, 9.5};

    printf("Dados do aluno:\n");
    printf("Nome: %s\n", aluno_karai.nome);
    printf("Idade: %d anos\n", aluno_karai.idade);
    printf("Nota da prova: %.2f\n", aluno_karai.nota);

    return 0;
}