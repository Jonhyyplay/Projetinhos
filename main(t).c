#include <stdio.h>

int main(void) {
 float D, T, V;
//Definição de valores às variáveis:

  printf ("Definir valor da distância : ");
  scanf ("%f", &D);

  printf ("Definir valor do tempo : ");
  scanf ("%f", &T);
//Cálculo da velocidade:

  V = (D * 1000) / (T * 60);
//Resultado:

  printf ("A velocidade média é: ""%.2f km/h", V);
   
  return 0;
}