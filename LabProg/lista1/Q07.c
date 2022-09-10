#include <stdio.h>

int main() {
  int h, min, s;
  printf("Digite a quantidade de horas: ");
  scanf("%d", &h);
  getchar();
  printf("Minutos: ");
  scanf("%d", &min);
  getchar();
  printf("Segundos: ");
  scanf("%d", &s);
  getchar();

  int maxsec = h * 3600 + min * 60 + s;
  printf("Quantidade total de segundos: %d\n", maxsec);
  
  return 0;
}