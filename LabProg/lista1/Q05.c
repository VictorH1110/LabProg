#include <stdio.h>

int main() {
  float conta;
  float taxa;
  printf("Digite o valor da conta: ");
  scanf("%f", &conta);
  taxa = conta * 10 / 100;
  printf("Conta com taxa do garcom: %.2f\n", conta +   taxa);
  
  return 0;
}