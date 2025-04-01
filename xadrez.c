#include <stdio.h>

#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"


#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("%s + %s\n", CIMA, DIREITA);
    }

    printf("\nMovimento da Torre:\n");
    int j = 1;
    while(j <= MOVIMENTO_TORRE) {
        printf("%s\n", DIREITA);
        j++;
    }

    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("%s\n", ESQUERDA);
        k++;
    } while(k <= MOVIMENTO_RAINHA);

    return 0;
}