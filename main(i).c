#include <stdio.h>
int Y;

int main(void) {

  printf("Atribuir valor a Y: ");
  scanf("%d", &Y);
  printf("\n O quadrado de %d é " "%d", Y, Y * Y);

  return 0;
}