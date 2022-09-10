#include <stdio.h>

int main() {
    float raio;
    float pi = 3.14159;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Diametro: %.2f\n", 2 * raio);
    printf("Circunferencia: %.2f\n", 2 * raio * pi);
    printf("Area: %.2f\n", pi * raio * raio);
    return 0;
}