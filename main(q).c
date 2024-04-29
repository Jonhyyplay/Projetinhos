#include <stdio.h>

int main(void) {
  float R, A;
//Definição dos valor de R
  
  printf("Digite o valor do raio da circunferência: ");
  scanf ("%f", &R);
//Cálculo:

  A = 3.14 * R * R;
//Apresentação do resultado:

  printf ("\nO valor da área da circunferência é: ""%.2f", A);

  return 0;
}