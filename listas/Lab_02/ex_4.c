#include <stdio.h>

typedef struct {
  char nome[100];
  int matricula;
  char curso[100];
} Aluno;

int main() {
  Aluno alunos[5];

  for (int i = 0; i < 5; i++) {
    printf("Informe o nome do aluno %d: ", i + 1);
    scanf(" %[^\n]", alunos[i].nome); // Lê string com espaços

    printf("Informe a matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);

    printf("Informe o curso do aluno %d: ", i + 1);
    scanf(" %[^\n]", alunos[i].curso);

    printf("\n");
  }

  printf("Dados dos alunos cadastrados:\n");
  for (int i = 0; i < 5; i++) {
    printf("Aluno %d:\n", i + 1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matrícula: %d\n", alunos[i].matricula);
    printf("Curso: %s\n\n", alunos[i].curso);
  }

  return 0;
}
