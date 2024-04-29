#include <stdio.h>
float R,A,V;

int main(void){

printf ("Informe o valor do raio da lata de óleo: ");
scanf ("%f",&R);

  printf ("Informe o valor da altura da lata de óleo: ");
scanf ("%f", &A);

  V = 3.14159 * R * R * A;
printf ("O volume da lata de óleo é: %.2f", V);
  
  return 0;
}
