#include <stdio.h>

int main() {
    float c, l, h, v;
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &c);
    getchar();
    printf("Digite a largura da caixa: ");
    scanf("%f", &l);
    getchar();
    printf("Digite a altura da caixa: ");
    scanf("%f", &h);
    getchar();
    v = c * l * h;
    printf("Volume da caixa: %.2f\n", v);
    return 0;
}