#include <stdio.h>
int main(){
  float Cotação_real, Quantidade_reais, dolar; 

  //Definição de valores:

  printf ("Insira a quantidade do valor: ");
  scanf ("%f", &Quantidade_reais);
  
  printf ("Insira a cotação do real: ");
  scanf ("%f", &Cotação_real);

  //Cálculo:

  dolar = Quantidade_reais * Cotação_real;

  //Resultado:
   
  printf ("O valor em dólar é:$ ""%.2f", dolar);
  
  return 0;
}