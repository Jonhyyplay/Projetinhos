#include <stdio.h>
#include <math.h>

int main(void) {
double B, N, X;
//Definir valores às variáveis:
  
  printf ("Defina o valor de B: ");
  scanf ("%lf", &B);

  printf ("Defina o valor de N: ");
  scanf ("%lf", &N);
//Cálculo da radiciação:

 X = pow(B, 1/N);
//Resultado:

  printf ("\nO valor da radiciação é: " "%.4lf", X);
  

return 0;
}