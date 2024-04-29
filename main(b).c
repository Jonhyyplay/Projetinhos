#include <stdio.h>
float F,C;

int main(void){
printf("Informar temperatura em Faherenheit: ");
scanf("%f", &F);
C = ((F-32)*5/9);
printf("Resultado convertido: " "%f", C);

  return 0;
}