#include <stdio.h>

int main(void) {
 float X, A, B; 
// Definir valor da variável:
  
  printf ("Defina o valor de X: ");
  scanf ("%f", &X);
//Sucessor e antecessor da variável:

  A = X + 1;
  B = X - 1;
//Resultados:

  printf ("\nO sucessor da variável é: " "%.f", A);
  printf ("\nO antecessor da variável é: " "%.f", B);
  
  return 0;
}