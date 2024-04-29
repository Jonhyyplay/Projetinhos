#include <stdio.h>
#include <math.h>
int main(void) {
  double A, B, Q_D;
//Atribuir valores às variáveis:
  
  printf ("Digite o valor de A: ");
  scanf ("%lf", &A);

  printf ("Digite o valor de B: ");
  scanf ("%lf", &B);
//Cálculo da operação:

  Q_D = pow((A / B), 2);
//Resultados:

  printf("O quadrado da divisão de A por B é: %.2lf", Q_D);

  return 0;
}