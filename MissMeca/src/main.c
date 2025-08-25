#include <stdio.h>

struct Heart { // Structure declaration
};

int writeToFile() {
  FILE *f;
  f = fopen("test.txt", "w");
  fprintf(f, "asdasd");
  return 0;
}

int main() { return 0; }
