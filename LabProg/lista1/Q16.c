#include <stdio.h>

int main(){
    float hora_aula, desconto;
    int horas_mes;
    printf("Digite o valor da hora aula: ");
    scanf("%f", &hora_aula);
    getchar();
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &horas_mes);
    getchar();
    printf("Digite o valor de desconto do INSS: ");
    scanf("%f", &desconto);
    
    float bruto, liquido;
    bruto = hora_aula * horas_mes;
    liquido = bruto - (bruto * desconto/100);
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Salario liquido: R$ %.2f\n", liquido);
    return 0;
}