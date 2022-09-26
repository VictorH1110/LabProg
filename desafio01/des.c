 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

int main() {
    unsigned char arm = 0, x;
    unsigned char mask = 0x1;
    int pos;
    int u = 0;
    srand(time(NULL));
    do {
        puts("===============================================");
        puts("                   ARMARIOS                    ");
        puts("===============================================");
        for (int i = 8; i > 0; i--) {
            x = (arm >> i) & mask;
            printf("| %d | ", i);
        }
        printf("\n");
        for (int i = 7; i >= 0; i--) {
            x = (arm >> i) & mask;
            printf("| %d | ", x);
        } 
        puts("\nMenu: ");
        puts("1. Ocupar armario\n2. Desocupar armario\n3. Sair do programa");
        if (arm == 255)
            printf("Armarios cheios!\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &u);
        getchar();
        if (u == 1 && arm != 255) {
            while (1) {
                pos = rand() % 8;
                if (!(arm & (mask << pos))) {
                    arm = arm | (mask << pos);
                    break;
                }
            }
        }
        else if (u == 2 && arm != 0) {
            printf("Digite a posicao do armario que sera desocupado: ");
            scanf("%d", &pos);
            getchar();
            arm = arm ^ (mask << pos - 1);
        }
    } while(u != 3);
    return 0;
}
 //usar potencias de 2 para as condições
   