#include <stdio.h>

int main(void) {
 float A, B, S, D, P, Q;
//Definir valores das variáveis:

  printf ("Defina o valor de A: ");
  scanf ("%f", &A);

  printf ("Defina o valor de B: ");
  scanf ("%f", &B);
//Cálculos das variáveis:

  S = A + B;
  D = A - B;  
  P = A * B;
  Q = A / B;
  
//Resultados:  

  printf ("\nResultado da soma: " "%.2f", S);
  printf ("\nResultado da diferença: " "%.2f", D);
  printf ("\nResultado da multiplicação: " "%.2f", P);
  printf ("\nResultado da divisão: " "%.2f", Q);
  
  
  return 0;
}