#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    getchar();
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    getchar();
    // Condição
    a % b ? printf("%d nao e multiplo de %d!", a, b) : printf("%d e multiplo de %d!", a, b);
    return 0;
}