#include <stdio.h> 

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Antecessor: %d \nSucessor: %d\n", num-1, num+1);
    return 0;
}