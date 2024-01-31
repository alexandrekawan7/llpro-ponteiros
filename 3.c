#include <stdio.h>


int main(void) {
  int a, b;
  int *pa = &a;
  int *pb = &b;

  scanf("%d%d", pa, pb);

  *pa = *pa + *pb;
  *pb = *pa - *pb;
  *pa = *pa - *pb;

  printf("%d, %d", a, b);
  
  return 0;
}
