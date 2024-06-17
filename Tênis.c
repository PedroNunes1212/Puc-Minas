#include <stdio.h>

int main() {
    int vitorias;

    printf("Digite o numero de vitorias: ");
    scanf("%d", &vitorias);

    if (vitorias == 5 || vitorias == 6) {
        printf("Grupo 1 \n");
    } else if (vitorias == 3 || vitorias == 4) {
        printf("Grupo 2\n");
    } else if (vitorias == 1 || vitorias == 2) {
        printf("Grupo 3\n");
    } else if (vitorias == 0) {
      printf("Grupo 3\n");
    } else {
        printf("Grupo Inválido \n");
    }

    return 0;
  }