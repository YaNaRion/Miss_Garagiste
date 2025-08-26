#include <curl/curl.h>
#include <stdio.h>

struct Heart {};

int writeToFile() {
  FILE *f;
  f = fopen("test.txt", "w");
  fprintf(f, "asdasd");
  return 0;
}

int main() { return 0; }
