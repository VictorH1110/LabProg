#include <stdio.h>

int main(){
    int dias;
    float bruto, liquid;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);
    bruto = 50.25;
    if (dias > 10 && dias <= 20)
        bruto = bruto + (bruto * 20/100);
    else if (dias > 20)
        bruto = bruto + (bruto * 30/100);
    liquid = bruto - (bruto * 10/100);
    printf("Salario liquido: %.2f", liquid);
    return 0;
}