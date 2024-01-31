#include <stdio.h>
#include <string.h>


int main(void) {
  int x;
  char s[125] = { 0 };
  
  printf("Digite um número inteiro: ");
  scanf("%d", &x);

  snprintf(s, 124, "%d", x);

  printf("Número inverso: ");

  for (int i = strlen(s) - 1; i >= 0; i--) {
    putchar(s[i]);
  }
  
  return 0;
}
