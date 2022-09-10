#include <stdio.h>

int main() {
    float x;
    int e, y;
    printf("Digite um numero: ");
    scanf("%f", &x);
    getchar();
    printf("Agora digite o valor do expoente: ");
    scanf("%d", &e);
    getchar();
    y = 1 << e;
    printf("%.2f x 2 elevado a %d e: %.2f", x, e, x * y);
    return 0;
}