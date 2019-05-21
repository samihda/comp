#include <stdio.h>
#include "utils.c"
#include "sort.h"

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
    list[i] = randomint(RANGE);
  }
}

int main()
{
  int numbers[LENGTH], numberscopy[LENGTH];

  seedrandom();

  gennum(LENGTH, numbers);

  printf("Random numbers:\n");
  printnum(LENGTH, numbers);

  msort(LENGTH, numbers, numberscopy);

  printf("Ordered numbers:\n");
  printnum(LENGTH, numbers);

  return 0;
}
