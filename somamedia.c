#include <stdio.h>
#include <stdlib.h>
int main (void) {
  int numeros[5];
  int soma = 0;
  printf(" Digite 6 números inteiros:\n");
  for (int i = 0; i < 6; i++) {
    printf("Número %d:", i + 1);
    scanf("%d", &numeros[i]);
    soma = soma + numeros[i];
  }
  double media = (double)soma / 6;
  printf(" Soma: %d\n", soma);
  printf(" Média : %2lf", media);

  return 0;
}
