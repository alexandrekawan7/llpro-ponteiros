#include <stdio.h>
#include <string.h>

#define MAX_IN 1024

int main(void) {
  char in[MAX_IN + 1] = {0};
  printf("Removedor de vogais\n\n");

  printf("Digite um texto: ");
  fgets(in, MAX_IN, stdin);

  char n[strlen(in) + 1];
  int offset = 0;

  memset(n, 0, (strlen(in) + 1) * sizeof(char));

  for (int i = 0; i < strlen(in); i++) {
    char c = in[i];

    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
      n[offset++] = c;
    }
  }

  printf("Sem vogais: %s", n);

  return 0;
}
