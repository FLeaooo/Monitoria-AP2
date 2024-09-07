#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[100];
  char endereco[100];
  char email[100];
  int idade;
  char cpf[20];
  char sexo;
  int dia_nasc;
  int mes_nasc;
  int ano_nasc;
  float altura;
  float peso;
  float imc;
} Cliente;

int main() {

  Cliente cliente;

  char id[100];

  // Lendo os dados
  printf("nome:");
  scanf(" %[^\n]", cliente.nome); // pra ler string com espaço

  printf("endereco:");
  scanf(" %[^\n]", cliente.endereco);

  printf("email:");
  scanf(" %[^\n]", cliente.email);

  printf("idade:");
  scanf("%d", &cliente.idade);

  printf("cpf:");
  scanf("%s", cliente.cpf);

  printf("sexo (m/f):");
  scanf(" %c", &cliente.sexo); // le só um caractere

  printf("dia nascimento:");
  scanf("%d", &cliente.dia_nasc);

  printf("mes nascimento:");
  scanf("%d", &cliente.mes_nasc);

  printf("ano nascimento:");
  scanf("%d", &cliente.ano_nasc);

  printf("altura:");
  scanf("%f", &cliente.altura);

  printf("peso:");
  scanf("%f", &cliente.peso);

  // Calculando IMC
  cliente.imc = cliente.peso / (cliente.altura * cliente.altura);

  // Exibindo os dados
  printf("dados do cliente\n");
  printf("nome %s\n", cliente.nome);
  printf("endereco %s\n", cliente.endereco);
  printf("email %s\n", cliente.email);
  printf("idade %d\n", cliente.idade);
  printf("cpf %s\n", cliente.cpf);
  printf("sexo %c\n", cliente.sexo);
  printf("data de nascimento %02d/%02d/%04d\n", cliente.dia_nasc,
         cliente.mes_nasc, cliente.ano_nasc);
  printf("altura %.2f\n", cliente.altura);
  printf("peso %.2f\n", cliente.peso);
  printf("imc %.2f\n", cliente.imc);

  // Comparando o nome com a variável id
  printf("\nDigite o nome pra comparar\n");
  scanf(" %[^\n]", id);

  if (strcmp(id, cliente.nome) == 0) {
    printf("Nome igual\n");
  } else {
    printf("Nome diferente\n");
  }

  return 0;
}
