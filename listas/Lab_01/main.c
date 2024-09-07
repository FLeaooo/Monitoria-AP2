#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // Para a função abs
#include <string.h>

void question_2() {
  int horas, segundos;
  printf("Insira as horas:");
  scanf("%d", &horas);
  segundos = horas * 60 * 60;
  printf("Segundos: %d", segundos);
}

void question_3() {
  int a, b, c, maiorAB;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);

  maiorAB = (a + b + abs(a - b)) / 2;
  printf("Maior %d \n", maiorAB);

  if (maiorAB < c) {
    printf("A e B são menores que C\n");
  } else {
    printf("C é menor que A e B\n");
  };
}

void question_4() {
  int idade, horasEstudo;

  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);
  printf("Digite o número de horas de estudo por semana: ");
  scanf("%d", &horasEstudo);

  if (horasEstudo < 5) {
    printf("Categoria: Estudante Desmotivado\n");
  } else if (idade < 18 && horasEstudo >= 15) {
    printf("Categoria: Estudante Jovem\n");
  } else if (idade >= 18 && idade < 25 && horasEstudo >= 10) {
    printf("Categoria: Estudante Adulto\n");
  } else if (idade >= 25 && horasEstudo < 10) {
    printf("Categoria: Estudante Sênior\n");
  } else {
    printf("Categoria: Não Categorizado\n");
  }
}

int fatorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return fatorial(n - 1) * n;
}
void question_5() {
  int num, num_resp;
  printf("Digite o fatorial: ");
  scanf("%d", &num);
  num_resp = fatorial(num);
  printf("Reposta %d\n", num_resp);
}

int fibonaci(int n) {
  if (n <= 2) {
    return 1;
  }
  return fibonaci(n - 1) + fibonaci(n - 2);
}

void question_6() {
  int num, num_resp;
  printf("Digite o fibonaci: ");
  scanf("%d", &num);
  num_resp = fibonaci(num);
  printf("Reposta %d\n", num_resp);
}

int eh_primo(int num) {
  if (num <= 1) {
    return 0;
  }
  if (num == 2) {
    return 1; // 2 é o único número primo par
  }
  if (num % 2 == 0) {
    return 0; // múltiplos de 2 não são primos
  }
  for (int i = 3; i * i <= num;
       i += 2) { // verifica apenas até a raiz quadrada de num
    if (num % i == 0) {
      return 0; // se for divisível por i, não é primo
    }
  }
  return 1; // se passou por todas as verificações, é primo
}

void question_7() {
  int i, j;
  int vetor[10];

  // Primo = 1
  // Não Primo = 0

  for (i = 0; i < 10; i++) {
    int resp_primo;
    resp_primo = eh_primo(i);
    vetor[i] = resp_primo;
    printf("\n");
    for (j = 0; j < i; j++) {
      printf("%d", vetor[j]);
    }
  }
  printf("\n");
}

void ehPalindromo(char str[]) {
  int esquerda = 0;
  int direita = strlen(str) - 1;

  while (esquerda < direita) {
    while (esquerda < direita && !isalnum(str[esquerda])) {
      esquerda++;
    }
    while (esquerda < direita && !isalnum(str[direita])) {
      direita--;
    }

    if (tolower(str[esquerda]) != tolower(str[direita])) {
      printf("Não é Palindromo\n");
    }
    esquerda++;
    direita--;
  }

  printf("É Palindromo\n");
}

void question_8() {
  char palavra[255];

  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  ehPalindromo(palavra);
}

void menu() {
  int resp;
  printf("Selecione a opção que deseja:\n0- Sair\n2- Converter horas em "
         "segundos\n3- Menor a,b,c\n4- Estudantes\n5- Fatorial\n6- "
         "Fibonaci\n7- Vetor 10\n8- Palindromo\n");
  scanf("%d", &resp);
  if (resp == 2) {
    question_2();
  } else if (resp == 3) {
    question_3();
  } else if (resp == 4) {
    question_4();
  } else if (resp == 5) {
    question_5();
  } else if (resp == 6) {
    question_6();
  } else if (resp == 7) {
    question_7();
  } else if (resp == 8) {
    question_8();
  }
}

int main() { menu(); }
