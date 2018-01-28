#include <stdio.h>
#include "scisnij.c"


int main() {
  char src[] = "abrakadabra";
  char dst[] = "ad";
  scisnij(src, dst);
  printf("%s\n", src);
  return 0;
}
