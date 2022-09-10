#include <stdio.h>

int main() {
  int x;
  printf("Digite um numero inteiro: ");
  scanf("%d", &x);
  printf("Triplo: %d\n", 3 * x);
  printf("Quadrado: %d\n", x * x);
  printf("Meio: %.2f\n", (float)x / 2);
  
  return 0;
}