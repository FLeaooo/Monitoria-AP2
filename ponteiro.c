#include <stdio.h>

/* RESPONDA
 * 1- O q*/
void passagem_valor(int valor) {
  // A variavel é modifica na função apenas, o valor real dela continua mesma
  valor = 1000; // modifica o valor da variavel local
}

void passagem_referencia(int *valor) {
  // Aqui a função recebe o endereço da variavel, e cria uma variavel do TIPO
  // PONTEIRO, para acessar o valor da variavel que o ponteiro aponta, precisa
  // passar o  *, se não passar você iria apenas acessar o valor do ponteiro,
  // que lembre o valor do ponteiro é o endereço da variavel que ele aponta, e
  // para acessar o valor desta variavel que ele aponta é necessario utilizar o
  // simbolo do ponteiro
  //
  // valor = 10 -> Modifica o valor dela, então ela vai passar a apontar para o
  // endereço de memoria 10
  //
  // *valor = 10 -: Vai modificar o valor de quem ela aponta (Seria a variavel
  // que foi passada na funcao)

  *valor = 5000; // Modifica o valor da variavel que ele aponta
}

void trocando_ponteiros(int *pt1, int *pt2) {}

int main() {
  int numero = 10;
  int *p1 = &numero;
  int **p2 = &p1;

  // Quando rodar o codigo, olhe os 3 ultimos caracteres do endereço, fica
  // mais facil de perceber, pois normalmente os primeiros carracter são iguais

  printf("Valor numero: %d\n", numero);
  printf("Endereço numero: %p\n", &numero);

  printf("\nValor p1: %p\n", p1);
  printf("Endereço p1: %p\n", &p1);
  printf("Aponta *p1: %d\n", *p1);

  printf("\nValor p2: %p\n", p2);
  printf("Endereço p2: %p\n", &p2);
  printf("Aponta *p2: %p\n", *p2);
  printf("Aponta **p2: %d\n", **p2);

  /*
   * Variavel   = O nome da variavel
   * Valor      = É o valor que a variavel armazena pode ser numero, caracter...
   * Endereço   = O endereço da variavel na memoria
   *
   * Apontar *  = Acessa o valor da variavel que aponta
   *              Caso a variavel seja um ponteiro, então ela armazena um
   *              endereço de memoria (O valor dela é o endereço da variavel),
   *              sendo assim, ela consegue acessar o valor da variavel que ela
   *              armazena (aponta) passando o *
   *
   * Apontar ** = Ela acessa o valor do ponteiro do ponteiro
   *              Mas para isso ela precisa ser um ponteiro de ponteiro
   *
   * Variavel | Valor | End | Apt* | Apt**
   * numero   |  10   |  AA | erro | erro
   * p1       |  AA   |  BB |  10  | erro
   * p2       |  BB   |  CC |  AA  | 10
   * */

  printf("\n\n-------------\n");
  int x = 1;
  passagem_valor(x); // Passa o valor de x
  printf("Valor continua igual x = %d\n", x);
  passagem_referencia(&x); // Passa o endereço de x
  printf("Valor de x apos chamar funcao por referencia = %d\n", x);
  return 0;
}
