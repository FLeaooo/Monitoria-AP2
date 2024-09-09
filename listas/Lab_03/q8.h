#ifndef MEDIAS_H
#define MEDIAS_H

float calcular_media_aritmetica(float nota1, float nota2, float nota3) {
  return (nota1 + nota2 + nota3) / 3;
}
float calcular_media_ponderada(float nota1, float nota2, float nota3) {
  float pesos[] = {5, 3, 2}; // Pesos para cada nota
  float soma_pesos = pesos[0] + pesos[1] + pesos[2];
  return (nota1 * pesos[0] + nota2 * pesos[1] + nota3 * pesos[2]) / soma_pesos;
}
#endif
