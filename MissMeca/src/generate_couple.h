#include <stdio.h>

typedef struct ProblemSolution {
  const char *mat;
  const char *shape;
  const char *technique;
} ProblemSolution;

typedef struct Couple {
  const char *men;
  const char *women;
  Problems problems;
} Couple;

typedef struct Problems {
  struct ProblemSolution snoring;
  struct ProblemSolution communication;
  struct ProblemSolution pressure;
  struct ProblemSolution television;
} Problems;

Couple createCouple();
