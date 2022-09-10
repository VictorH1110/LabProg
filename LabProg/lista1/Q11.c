#include <stdio.h>

int main(){
    float real, cot, dol;
    printf("Digite o valor da cotacao do dolar: ");
    scanf("%f", &cot);
    getchar();
    printf("Digite a quantidade de reais que sera convertida: ");
    scanf("%f", &real);
    getchar();
    dol = real * cot;
    printf("R$ %.2f = US$ %.2f\n", real, dol);
}