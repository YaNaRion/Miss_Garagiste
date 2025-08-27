#include "generate_couple.h"
#include <stdio.h>

// int writeToFile(struct Heart *h) {
//   FILE *f;
//   f = fopen("test.txt", "w");
//   fprintf(f, "asdasd");
//   return 0;
// }

int main() {
  Couple couple = createCouple();
  printf("Men: %s, Women: %s", couple.men, couple.women);

  return 0;
}
