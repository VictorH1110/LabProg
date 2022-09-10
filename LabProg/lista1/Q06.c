#include <stdio.h>
int main() {
  float altura;
  char sexo, lixo;
  printf("Digite a sua altura: ");
  scanf("%f", &altura);
  scanf("%c", &lixo);
  printf("Digite o seu sexo [M/F]: ");
  scanf("%c", &sexo);

  if (sexo == 'M' || sexo == 'm') {
    float pi = 72.7 * altura - 58;
    printf("Peso ideal: %.2f\n", pi);
  }
  else if (sexo == 'F' || sexo == 'f') {
    float pi = 62.1 * altura - 44.7;
    printf("Peso ideal: %.2f\n", pi);
  }
  else {
    printf("Sexo inválido!\n");
  }
  
  return 0;
}