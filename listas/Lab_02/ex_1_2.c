#include <stdio.h>

typedef struct {
  char name[255];
  char area[255];
  double valor_atual;
  double valor_anterior;
  double variacao;
} Acoes;

int main() {
  Acoes minha_acao;

  printf("Digite o nome da ação: ");
  scanf("%s", minha_acao.name);

  printf("Digite a área da ação: ");
  scanf("%s", minha_acao.area);

  printf("Digite o valor atual: ");
  scanf("%lf", &minha_acao.valor_atual);

  printf("Digite o valor anterior: ");
  scanf("%lf", &minha_acao.valor_anterior);

  printf("Digite a variacao : ");
  scanf("%lf", &minha_acao.variacao);

  printf("\nPrencher dados:\n");
  printf("Nome: %s\n", minha_acao.name);
  printf("Área: %s\n", minha_acao.area);
  printf("Valor Atual: %.2f\n", minha_acao.valor_atual);
  printf("Valor Anterior: %.2f\n", minha_acao.valor_anterior);
  printf("Variação: %.2f\n", minha_acao.variacao);
  return 0;
}
