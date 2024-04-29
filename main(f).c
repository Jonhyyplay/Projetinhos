#include <stdio.h>

int A, B, temp;
int main(void) {

  A = 5;
  B = 10;
  printf("Antes da troca de valores: \n");
  printf("A = %d\n", A, &A);
  printf("B = %d\n", B, &B);

  temp = A;
  A = B;
  B = temp;

  printf("\n Depois da troca de valores: \n");
  printf("A = %d\n", A, &A);
  printf("B = %d\n", B, &B);

  return 0;
}