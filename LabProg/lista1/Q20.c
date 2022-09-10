#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    (num % 2) ? printf("Impar!\n") : printf("Par!\n");
    return 0;
}