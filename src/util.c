#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void seedrandom()
{
  srand(time(0));
}

int randomint(int max)
{
  /* return inclusive 0..(max - 1) */
  return rand() % max;
}

void printnum(int len, int *list)
{
  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");
}
