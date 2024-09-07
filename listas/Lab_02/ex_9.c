#include <stdio.h>

typedef struct {
  int matricula;
  char nome[100];
  float nota1;
  float nota2;
  float nota3;
} Aluno;

void lerDados(Aluno alunos[], int qtd);
Aluno alunoMaiorNota1(Aluno alunos[], int qtd);
Aluno alunoMaiorMedia(Aluno alunos[], int qtd);
Aluno alunoMenorMedia(Aluno alunos[], int qtd);
void verificarAprovacao(Aluno aluno);

int main() {
  Aluno alunos[5];

  // Lendo dados dos alunos
  lerDados(alunos, 3);

  // Encontrando o aluno com a maior nota na primeira prova
  Aluno melhorNota1 = alunoMaiorNota1(alunos, 3);
  printf("Aluno com a maior nota na primeira prova:\n");
  printf("Nome: %s, Nota: %.2f\n\n", melhorNota1.nome, melhorNota1.nota1);

  // Encontrando o aluno com a maior média geral
  Aluno melhorMedia = alunoMaiorMedia(alunos, 3);
  printf("Aluno com a maior média geral:\n");
  printf("Nome: %s, Média: %.2f\n\n", melhorMedia.nome,
         (melhorMedia.nota1 + melhorMedia.nota2 + melhorMedia.nota3) / 3);

  // Encontrando o aluno com a menor média geral
  Aluno piorMedia = alunoMenorMedia(alunos, 3);
  printf("Aluno com a menor média geral:\n");
  printf("Nome: %s, Média: %.2f\n\n", piorMedia.nome,
         (piorMedia.nota1 + piorMedia.nota2 + piorMedia.nota3) / 3);

  // Verificando aprovação de todos os alunos
  for (int i = 0; i < 3; i++) {
    printf("Resultado de %s:\n", alunos[i].nome);
    verificarAprovacao(alunos[i]);
  }

  return 0;
}

// Função para ler os dados dos alunos
void lerDados(Aluno alunos[], int qtd) {
  for (int i = 0; i < qtd; i++) {
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf(" %[^\n]", alunos[i].nome);
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &alunos[i].nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &alunos[i].nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &alunos[i].nota3);
    printf("\n");
  }
}

// Função para encontrar o aluno com a maior nota na primeira prova
Aluno alunoMaiorNota1(Aluno alunos[], int qtd) {
  Aluno melhor = alunos[0];
  for (int i = 1; i < qtd; i++) {
    if (alunos[i].nota1 > melhor.nota1) {
      melhor = alunos[i];
    }
  }
  return melhor;
}

// Função para encontrar o aluno com a maior média geral
Aluno alunoMaiorMedia(Aluno alunos[], int qtd) {
  Aluno melhor = alunos[0];
  float mediaAtual;
  float mediaMelhor = (melhor.nota1 + melhor.nota2 + melhor.nota3) / 3;
  for (int i = 1; i < qtd; i++) {
    mediaAtual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    if (mediaAtual > mediaMelhor) {
      mediaMelhor = mediaAtual;
      melhor = alunos[i];
    }
  }
  return melhor;
}

// Função para encontrar o aluno com a menor média geral
Aluno alunoMenorMedia(Aluno alunos[], int qtd) {
  Aluno pior = alunos[0];
  float mediaAtual;
  float mediaPior = (pior.nota1 + pior.nota2 + pior.nota3) / 3;
  for (int i = 1; i < qtd; i++) {
    mediaAtual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    if (mediaAtual < mediaPior) {
      mediaPior = mediaAtual;
      pior = alunos[i];
    }
  }
  return pior;
}

// Função para verificar se o aluno foi aprovado ou reprovado
void verificarAprovacao(Aluno aluno) {
  float media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
  if (media >= 6) {
    printf("Aprovado com média: %.2f\n", media);
  } else {
    printf("Reprovado com média: %.2f\n", media);
  }
}
