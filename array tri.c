#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int matriz[2][2][2] = {{{1, 2}, {3, 4}} {{5, 6}, {7, 8}}};
  int contador = 0;
  int soma = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; i < 2; i++) {
        soma = soma + matriz [i, j, k];
      }
    }
  }
  printf(" A soma dos elementos é: %d\n", soma);
  double media = (double)soma / contador;
  printf("A média é:%2lf\n", media);
  return 0;
}