#include <stdio.h>
float V, Ta, Te, P;

int main(void) {

  printf("Atribua um quantida em valor: ");
  scanf("%f", &V);

  printf("Atribua uma taxa: ");
  scanf("%f", &Ta);

  printf("Atribua um tempo: ");
  scanf("%f", &Te);

  P = V + (V * (Ta / 100) * Te);
  printf("O valor da prestação é: %.3f", P);

  return 0;
}