#include <stdio.h>
float T, V, D, L;

int main(void) {

  printf("Digite o valor do tempo: ");
  scanf("%f", &T);

  printf("Digite o valor da velocidade: ");
  scanf("%f", &V);

  D = T * V;

  printf("O valor da distância é: " "%f", D);

  L = D / 12;

  printf("\n A quantidade de litros gastos é: " "%.2f", L);
  
  printf ("\n A velocidade é: " "%.2f", V);
  printf ("\n O tempo é: " "%.2f", T);
  printf ("\n A distância é: " "%.2f", D);




  
  return 0;
}