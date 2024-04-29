#include <stdio.h>
int main(void){
  float Cotação_dolar, Quantidade_dolares, Real; 
  
  //Inserir valores:
  
  printf ("Insira a cotação do dólar: ");
  scanf ("%f", &Cotação_dolar);
  printf ("Insira a quantidade do valor: ");
  scanf ("%f", &Quantidade_dolares);
  //Cálculo:
  
  Real = Quantidade_dolares * Cotação_dolar;
  //Resultado da conversão:
  
  printf ("O valor da conversão é:R$ " "%.2f", Real);

  return 0;
}