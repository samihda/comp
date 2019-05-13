#include <stdio.h>

#define LENGTH 3

void sort(int arr[]);

int main()
{
  int i, j, a, numbers[LENGTH];

  for (i = 0; i < LENGTH; i++) {
    printf("Enter number: ");
    scanf("%d", &numbers[i]);
  }

  sort(numbers);

  printf("Ordered numbers:\n");

  for (i = 0; i < LENGTH; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}

void sort(int arr[])
{
  printf("Sorting...\n");
}
