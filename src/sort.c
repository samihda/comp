#include <stdio.h>

#define LENGTH 3

void bsort(int length, int *arr);
void swap(int *x, int *y);

int main()
{
  int i, j, a, numbers[LENGTH];

  for (i = 0; i < LENGTH; i++) {
    printf("Enter number: ");
    scanf("%d", &numbers[i]);
  }

  bsort(LENGTH, numbers);

  printf("Ordered numbers:\n");

  for (i = 0; i < LENGTH; i++) {
    printf("%d\n", numbers[i]);
  }

  return 0;
}

void bsort(int length, int *arr)
{
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
