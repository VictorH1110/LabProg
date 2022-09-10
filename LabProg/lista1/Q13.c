#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    getchar();
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    getchar();
    C = B;
    B = A;
    A = C;
    printf("A: %d, B: %d\n", A, B);
    return 0;
}