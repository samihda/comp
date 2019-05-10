#include <stdio.h>

void sort(int arr[]);

int main()
{
  int i, j, a, numbers[3];

  printf("Enter three numbers\n");

  for (i = 0; i < 3; i++) {
    scanf("%d", &numbers[i]);
  }

  sort(numbers);

  printf("Ordered numbers:\n");

  for (i = 0; i < 3; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}

void sort(int arr[])
{
  printf("Sorting...\n");
}
