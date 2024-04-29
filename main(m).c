#include <stdio.h>

int main(void) {
  int A, B, C, R;
//Definir valores: 
  
  printf ("Definir valor de A: ");
  scanf ("%d", &A);
  
  printf ("Definir valor de B: ");
  scanf ("%d", &B);

  printf ("Definir valor de C: ");
  scanf ("%d", &C);
//Operação:

  R = (A * A) + (B * B) + (C * C);

//Resultado:

  printf ("\nO resultado da operação é: %d", R);
   
  return 0;
}