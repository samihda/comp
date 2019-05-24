#include <stdio.h>
#include "sort.h"
#include "util.h"

#define LENGTH 10
#define RANGE 50

void printnum(int len, int *list)
{
  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");
}

void gennum(int len, int *list)
{
  for (int i = 0; i < len; i++) {
    list[i] = randomint(RANGE + 1);
  }
}

int main()
{
  int numbers[LENGTH];

  seedrandom();

  gennum(LENGTH, numbers);

  printf("Random numbers:\n");
  printnum(LENGTH, numbers);

  qsort(0, LENGTH - 1, numbers);

  printf("Ordered numbers:\n");
  printnum(LENGTH, numbers);

  return 0;
}
