#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define LENGTH 10
#define RANGE 50

void seedrandom()
{
  srand(time(0));
}

int randomint(int max)
{
  // return 1 - max (inclusive)
  return (rand() % max) + 1;
}

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
