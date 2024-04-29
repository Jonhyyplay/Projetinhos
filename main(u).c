#include <stdio.h>

int main(void) {
  float R, V;
  // Definir valores às variáveis:

  printf("Digite o valor do raio da esfera: ");
  scanf("%f", &R);
  // Cálculo do volume da esfera:

  V = 1.33 * 3.14 * (R * R * R);
  // Resultado da operação:

  printf("\nO volume da esfera é:" "%.3f", V);

  return 0;
}