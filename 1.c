#include <stdio.h>

void ordenar(int *a, int *b, int *c) {
  int v[3] = { *a, *b, *c };

  while (1) {
    int nSwaps = 0;
    
    for (int i = 0; i < 2; i++) {
      if (v[i] > v[i + 1]) {
        int tmp = v[i];

        v[i] = v[i + 1];
        v[i + 1] = tmp;

        nSwaps++;
      }
    }

    if (nSwaps == 0) {
      break;
    }
  }

  *a = v[0];
  *b = v[1];
  *c = v[2];
}

int main(void) {
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  ordenar(&a, &b, &c);

  printf("%d, %d, %d\n", a, b, c);
  
  return 0;
}
