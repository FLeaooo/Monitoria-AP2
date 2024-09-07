#include <stdio.h>

typedef struct {
  int hora;
  int minuto;
  int segundo;
} Horario;

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  Data data;
  Horario horario;
  char texto[255];
} Agenda;

void preencherAgenda(Agenda *agenda) {
  printf("Digite o dia: ");
  scanf("%d", &agenda->data.dia);

  printf("Digite o mês: ");
  scanf("%d", &agenda->data.mes);

  printf("Digite o ano: ");
  scanf("%d", &agenda->data.ano);

  printf("Digite a hora: ");
  scanf("%d", &agenda->horario.hora);

  printf("Digite os minutos: ");
  scanf("%d", &agenda->horario.minuto);

  printf("Digite os segundos: ");
  scanf("%d", &agenda->horario.segundo);

  printf("Digite o texto do compromisso: ");
  scanf(" %[^\n]", agenda->texto);
}

void imprimirAgenda(const Agenda *agenda) {
  printf("\nDados da Agenda:\n");
  printf("Data: %02d/%02d/%d\n", agenda->data.dia, agenda->data.mes,
         agenda->data.ano);
  printf("Horário: %02d:%02d:%02d\n", agenda->horario.hora,
         agenda->horario.minuto, agenda->horario.segundo);
  printf("Compromisso: %s\n", agenda->texto);
}

int main() {
  Agenda minha_agenda;
  int opcao;

  do {
    printf("\nMenu:\n");
    printf("1 - Preencher os campos da struct\n");
    printf("2 - Imprimir os campos da struct\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      preencherAgenda(&minha_agenda);
      break;
    case 2:
      imprimirAgenda(&minha_agenda);
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida! Tente novamente.\n");
    }
  } while (opcao != 3);

  return 0;
}
