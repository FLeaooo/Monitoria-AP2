#include <stdio.h>

struct dma {
  int dia;
  int mes;
  int ano;
};

int main() {
  struct dma data1, data2;
  int dias_totais1, dias_totais2, diferenca;

  printf("Digite o dia da primeira data: ");
  scanf("%d", &data1.dia);
  printf("Digite o mês da primeira data: ");
  scanf("%d", &data1.mes);
  printf("Digite o ano da primeira data: ");
  scanf("%d", &data1.ano);

  printf("Digite o dia da segunda data: ");
  scanf("%d", &data2.dia);
  printf("Digite o mês da segunda data: ");
  scanf("%d", &data2.mes);
  printf("Digite o ano da segunda data: ");
  scanf("%d", &data2.ano);

  dias_totais1 = data1.ano * 365 + data1.mes * 30 + data1.dia;
  dias_totais2 = data2.ano * 365 + data2.mes * 30 + data2.dia;

  diferenca = dias_totais2 - dias_totais1;
  if (diferenca < 0) {
    diferenca = diferenca * -1;
  }

  printf("A diferença entre as datas é de %d dias.\n", diferenca);

  return 0;
}
