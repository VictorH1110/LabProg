#include <stdio.h>

int main() {
  int v1, v2;
  
  printf("Digite o primeiro valor da operacao: ");
  scanf("%d", &v1);
  getchar();
  printf("Digite o segundo valor da operacao: ");
  scanf("%d", &v2);
  getchar();
    printf("%d + %d = %d\n", v1, v2, v1+v2);
    printf("%d - %d = %d\n", v1, v2, v1-v2);
    printf("%d * %d = %d\n", v1, v2, v1*v2);
    printf("%d / %d = %d\n", v1, v2, v1/v2);
    printf("Resto: %d\n", (int)v1 % (int)v2);

  return 0;
}