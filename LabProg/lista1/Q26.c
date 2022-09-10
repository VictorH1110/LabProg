#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    float d;
    printf("Ponto 1\n");
    printf("Coordenada X: ");
    scanf("%d", &x1);
    getchar();
    printf("Coordenada Y: ");
    scanf("%d", &y1);
    //getchar();
    printf("Ponto 2\n");
    printf("Coordenada X: ");
    scanf("%d", &x2);
    getchar();
    printf("Coordenada Y: ");
    scanf("%d", &y2);
    getchar();
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distancia entre os pontos: %.2f", d);
    return 0;
}