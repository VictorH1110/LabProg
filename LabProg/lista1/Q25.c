#include <stdio.h>

int main() {
    int tempo;
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &tempo);
    if (tempo < 0)
        tempo = -tempo;
    int horas = 0, minutos = 0, segundos = 0;
    while (tempo > 0) {
        if (tempo >= 3600){
            tempo -= 3600;
            horas += 1;
        } else if (tempo >= 60) {
            tempo -= 60;
            minutos += 1;
        } else {
            segundos = tempo;
            tempo = 0;
        }
    }
    printf("%d horas %d minutos e %d segundos", horas, minutos, segundos);
    return 0;
}