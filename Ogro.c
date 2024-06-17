#include <stdio.h>
int numero;

int main(void) {
  printf(" Escolha um números de 1 a 10\n");
  scanf("%d", &numero);
  switch (numero) {
    case 1:
  printf("A configuração de dedos é: I *");
  break;
  case 2:
  printf("A configuração de dedos é: II *");
  break;
  case 3:
   printf("A configuração de dedos é: III *");
   break;
   case 4:
   printf("A configuração de dedos é: IIII  *");
  break;
  case 5:
  printf(" A configuração de dedos é: IIIII ");
  break;
  case 6:
  printf("A configuração de dedos é: IIIII I  ");
  break;
  case 7:
  printf("A configuração de dedos é: IIIII II  ");
  break;
  case 8:
  printf("A configuração de dedos é: IIIII III ");
  break;
  case 9:
   printf("A configuração de dedos é: IIIII IIII ");
   break;
  case 10:
  printf(" A configuração de dedos é: IIIII IIIII");
  break;
  default:
  printf("Número inválido.\n");
    break;
  }
}