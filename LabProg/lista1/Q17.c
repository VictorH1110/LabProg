#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    num < 0 ? printf("Modulo de %d: %d", num, -num) : printf("Modulo de %d: %d", num, num);
    return 0;
}