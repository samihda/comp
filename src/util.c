#include <stdlib.h>
#include <time.h>

void seedrandom()
{
  srand(time(0));
}

int randomint(int max)
{
  // return inclusive 0..(max - 1)
  return rand() % max;
}
