#include <stdio.h>
float C, F;

int main(void) {
  printf("Informar temperatura em Celsius: ");
  scanf("%f", &C);
  F = ((C * 9 / 5) + 32);
  printf("Resultado convertido: " "%f",F);

  return 0;
}