#include <stdio.h>
#include <math.h>

int main(void) {
int A, Y, R;
  
//Definição de valores às variáveis:  
  
  printf ("Defina um valor para A: ");
  scanf ("%d", &A);

  printf ("Defina um valor para Y: ");
  scanf ("%d", &Y);
//Cálculo:

  R = pow(A,Y);
//Resultado:

  printf ("O resultado é: " "%d", R);
  
  return 0;
}