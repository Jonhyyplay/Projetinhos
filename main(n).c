#include <stdio.h>
int main(){
  int A, B, C, R;
//Definição dos valores:
  
  printf ("Digite o valor de A: ");
  scanf ("%d", &A);

  printf ("Digite o valor de B: ");
  scanf ("%d", &B);

  printf ("Digite o valor de C: ");
  scanf ("%d", &C);

//Cálculo:

  R = (A + B + C) * (A + B + C);

//Resultado:

  printf ("\nO resultado é: " "%d", R);
  
  return 0;
}