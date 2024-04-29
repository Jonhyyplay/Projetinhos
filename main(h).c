#include <stdio.h>
float V, C, L, Litros, A;

int main(void) {
  // Definição de valores às variáveis:
  printf("Definir valo do comprimento: ");
  scanf("%f", &C);
  printf("Definir valor da largura: ");
  scanf("%f", &L);
  printf("Definir valor da aultura: ");
  scanf("%f", &A);

  // Cálculo do volume da caixa retangular:
  V = C * L * A;

  // Resultado do cálculo:

  printf("\nO volume da caixa retangular é: %.3f Litros", V);

  return 0;
}