#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "7.h"
#include <stdio.h>

void mostrarMenu() {
  printf("\nEscolha um exercício:\n");
  printf("2. Exercício 2\n");
  printf("3. Exercício 3\n");
  printf("4. Exercício 4\n");
  printf("5. Exercício 5\n");
  printf("6. Exercício 6\n");
  printf("7. Exercício 7\n");
  printf("0. Sair\n");
  printf("Digite a sua escolha: ");
}

int main() {
  int escolha;

  do {
    printf("\n\n\n---------------------------------");
    mostrarMenu();
    scanf("%d", &escolha);

    switch (escolha) {
    case 2:
      int resp;

      resp = exercicio_2(2);
      if (resp) {
        printf("\nNumero positivo");
      } else {
        printf("\nNumero negativo");
      }
      break;
    case 0:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (escolha != 0);

  return 0;
}
