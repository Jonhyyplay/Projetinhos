#include <stdio.h>

int main(void) {
  float S, Prct_Rjt, Nv_S; 
//Definir valores:
  
  printf ("Adicione o valor do salário: ");
  scanf ("%f", &S);

  printf ("Adicione o percentual de reajuste do salário: ");
  scanf ("%f", &Prct_Rjt);

//Cálculo:

  Nv_S = S + (S * Prct_Rjt / 100);

//Resultado:

  printf ("\nO novo salário é: %.2f", Nv_S);
  
  return 0;
}