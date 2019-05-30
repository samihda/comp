#include <stdio.h>
#include "sort.h"
#include "search.h"
#include "util.h"

#define LENGTH 10
#define RANGE 50

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

  int needle = numbers[randomint(LENGTH)];
  printf("Index of %d: %d\n", needle, bsearch_first(needle, LENGTH, numbers));

  return 0;
}
