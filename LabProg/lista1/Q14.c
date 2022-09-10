#include <stdio.h>

int main() {
    float C, F;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);
    F = (9 * C + 160) / 5;
    printf("%.2f C = %.2f F ", C, F);
    return 0;
}