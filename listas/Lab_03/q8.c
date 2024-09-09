#include <stdio.h>

#include "q8.h"

int main() {
  float nota1, nota2, nota3, media;
  char tipo_media;

  printf("Digite as três notas do aluno, separadas por espaço: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  printf(
      "Digite o tipo de média ('P' para ponderada ou 'A' para aritmética): ");
  scanf(" %c", &tipo_media);

  if (tipo_media == 'P') {
    media = calcular_media_ponderada(nota1, nota2, nota3);
  } else if (tipo_media == 'A') {
    media = calcular_media_aritmetica(nota1, nota2, nota3);
  } else {
    printf("Tipo de média inválido!\n");
    return 1; // Indica erro
  }

  printf("A média é: %.2f\n", media);
  return 0;
}
