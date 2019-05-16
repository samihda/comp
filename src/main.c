#include <stdio.h>
#include "sort.h"

#define LENGTH 3

int main()
{
  int i, j, a, numbers[LENGTH], numberscopy[LENGTH];

  for (i = 0; i < LENGTH; i++) {
    printf("Enter number: ");
    scanf("%d", &numbers[i]);
  }

  msort(LENGTH, numbers, numberscopy);

  printf("Ordered numbers:\n");

  for (i = 0; i < LENGTH; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}
