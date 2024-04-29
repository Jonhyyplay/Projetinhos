#include <stdio.h>
int A, B, C, D;
int S1, S2, S3, S4, S5, S6;
int M1, M2, M3, M4, M5, M6;

int main(void) {
  // Atribuição de valores às variáveis:
  printf("Atribua valor para variável A: ");
  scanf("%d", &A);
  printf("Atribua valor para variável B: ");
  scanf("%d", &B);
  printf("Atribua valor para variável C: ");
  scanf("%d", &C);
  printf("Atribua valor para variável D:");
  scanf("%d", &D);

  // Resultados das operações:
  // Adição:
  S1 = A + B;
  S2 = A + C;
  S3 = A + D;
  S4 = B + C;
  S5 = B + D;
  S6 = C + D;
  // Multiplicação:
  M1 = A * B;
  M2 = A * C;
  M3 = A * D;
  M4 = B * C;
  M5 = B * D;
  M6 = C * D;

  // Resultados das operações:

  printf("\nResultado da S1: %.2d\n", S1);
  printf("Resultado da S2: %.2d\n", S2);
  printf("Resultado da S3: %.2d\n", S3);
  printf("Resultado da S4: %.2d\n", S4);
  printf("Resultado da S5: %.2d\n", S5);
  printf("Resultado da S6: %.2d\n", S6);
  printf("\nResultado da M1: %.2d\n", M1);
  printf("Resultado da M2: %.2d\n", M2);
  printf("Resultado da M3: %.2d\n", M3);
  printf("Resultado da M4: %.2d\n", M4);
  printf("Resultado da M5: %.2d\n", M5);
  printf("Resultado da M6: %.2d\n", M6);

  return 0;
}