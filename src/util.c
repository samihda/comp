#include <stdlib.h>
#include <time.h>

void seedrandom()
{
  srand(time(0));
}

int randomint(int max)
{
  // return 1 - max (inclusive)
  return (rand() % max) + 1;
}
