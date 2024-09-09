#ifndef OPERACAO_MAT_H
#define OPERACAO_MAT_H
int somar(int x, int y) { return x + y; }

int subtrair(int x, int y) { return x - y; }

int multiplicar(int x, int y) { return x * y; }

float dividir(int x, int y) {
  if (y == 0) {
    printf("Erro: Divisão por zero!\n"); // Mensagem de erro
    return 0;
  } else {
    return (float)x / y; // Convertendo para float para ter resultado preciso
  }
}

#endif
