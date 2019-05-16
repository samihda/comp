#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define LENGTH 10

void seedrandom()
{
  srand(time(0));
}

int random50()
{
  return rand() % 50;
}

void printnum(int len, int *list)
{
  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");
}

int main()
{
  int i, j, a, numbers[LENGTH], numberscopy[LENGTH];

  seedrandom();

  for (i = 0; i < LENGTH; i++) {
    numbers[i] = random50(LENGTH);
  }

  printf("Random numbers:\n");
  printnum(LENGTH, numbers);

  msort(LENGTH, numbers, numberscopy);

  printf("Ordered numbers:\n");

  printnum(LENGTH, numbers);

  return 0;
}
