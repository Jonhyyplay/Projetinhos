#include <stdio.h>
int A, B, R;

int main(void) {
  // Atribuição de valores:

  printf("Digite o valor de A: ");
  scanf("%d", &A);

  printf("Digite o valor de B: ");
  scanf("%d", &B);

  // Quadrado da diferença dos valores:

  R = (A - B) * (A - B);

  // Apresentação do resultado:

  printf("\nResultado obtido: ""%.2d", R);

  return 0;
}