#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, n3;
    float ma, mg, mult;
    printf("Primeiro numero: ");
    scanf("%f", &n1);
    getchar();
    printf("Segundo numero: ");
    scanf("%f", &n2);
    getchar();
    printf("Terceiro numero: ");
    scanf("%f", &n3);
    getchar();
    ma = (n1 + n2 + n3) / 3;
    mg = pow(n1 * n2 * n3, 0.5);
    printf("Media aritmetica: %.2f\n", ma);
    printf("Media geometrica: %.2f\n", mg);
    return 0;
}