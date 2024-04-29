#include <stdio.h>

int main() {
  float m_metros, m_pés;
//Definir valor à variável:
  
  printf ("Defina um valor para a medida pé: ");
  scanf ("%f", &m_pés);
//Conversão:

  m_metros = m_pés * 0.3048;
//Resultado:

  printf ("\nO valor da conversão é: " "%.4f metros", m_metros);
  
  return 0;
}