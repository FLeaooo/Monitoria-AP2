#include <stdio.h>
#include <string.h>

typedef struct {
  char rua[100];
  int numero;
  char cep[20];
} Endereco;

typedef struct {
  char nome[100];
  Endereco dados;
  float saldo;
} Pessoa;

int main() {
  Pessoa cliente;

  strcpy(cliente.nome, "Joao Silva");
  strcpy(cliente.dados.rua, "Rua das Flores");
  cliente.dados.numero = 123;
  strcpy(cliente.dados.cep, "12345-678");
  cliente.saldo = 250.75;

  printf("Dados do cliente antes da atualização:\n");
  printf("Nome: %s\n", cliente.nome);
  printf("Endereco: %s, %d\n", cliente.dados.rua, cliente.dados.numero);
  printf("CEP: %s\n", cliente.dados.cep);
  printf("Saldo: %.2f\n\n", cliente.saldo);

  printf("Digite o novo nome");
  scanf(" %[^\n]", cliente.nome);

  printf("Digite a nova rua");
  scanf(" %[^\n]", cliente.dados.rua);

  printf("Digite o novo numero:");
  scanf("%d", &cliente.dados.numero);

  printf("Digite o novo CEP:");
  scanf("%s", cliente.dados.cep);

  printf("Digite o novo saldo:");
  scanf("%f", &cliente.saldo);

  printf("\nDados do cliente após a atualização:\n");
  printf("Nome: %s\n", cliente.nome);
  printf("Endereco: %s, %d\n", cliente.dados.rua, cliente.dados.numero);
  printf("CEP: %s\n", cliente.dados.cep);
  printf("Saldo: %.2f\n", cliente.saldo);

  return 0;
}
