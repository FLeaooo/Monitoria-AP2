#ifndef SAUDACAO_H
#define SAUDACAO_H
void saudacao(int hora) {
  if (hora >= 6 && hora <= 12) {
    printf("Bom dia!\n");
  } else if (hora >= 13 && hora <= 18) {
    printf("Boa tarde!\n");
  } else if ((hora >= 19 && hora <= 23) || (hora >= 0 && hora <= 5)) {
    printf("Boa noite!\n");
  } else {
    printf("Valor inválido!\n");
  }
}
#endif
