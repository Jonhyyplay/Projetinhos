#include <stdio.h>

int main(){
  int A, B, C, D, P, S;

//Definir valores:

  printf ("Definir valor de A: ");
  scanf ("%d", &A);
  
  printf("Definir valor de B: ");
  scanf ("%d", &B);

  printf ("Definir valor de C: ");
  scanf ("%d", &C);

  printf ("Definir valor de D: ");
  scanf ("%d", &D);
  
//Operações:

  P = A * C;
  S = B + D;

//Resultados:

  printf ("\nO produto de A e C é: " "%d", P);
  printf ("\nA soma de B e D é: " "%d", S);



  return 0;
}