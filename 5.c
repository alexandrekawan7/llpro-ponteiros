#include <stdio.h>
#include <string.h>


int main(void) {
  double real;
  double *realptr = &real;

  printf("Digite um número real: ");

  scanf("%lf", realptr);

  printf("Valor original: %lf\n", *realptr);
  printf("Valor dobrado: %lf\n", *realptr * 2);
  
  return 0;
}
