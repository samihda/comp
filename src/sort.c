#include <stdio.h>

#define LENGTH 3

void bsort(int length, int *arr);
void msort(int length, int *xs, int *ys);
void msortsplit(int *src, int i, int j, int *dst);
void msortmerge(int *src, int start, int mid, int end, int *dst);
void copy(int *src, int i, int j, int *dst);
void swap(int *x, int *y);

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

void msort(int length, int *xs, int *ys)
{
  copy(xs, 0, length, ys);
  msortsplit(ys, 0, length, xs);
}

void msortsplit(int *dst, int i, int j, int *src)
{
  if (j - i < 2) {
    return;
  }

  int mid = (i + j) / 2;
  msortsplit(src, i, mid, dst);
  msortsplit(src, mid, j, dst);
  msortmerge(dst, i, mid, j, src);
}

void msortmerge(int *src, int start, int mid, int end, int *dst)
{
  int i = start;
  int j = mid;

  for (int k = start; k < end; k++) {
    if (i < mid && (j >= end || src[i] <= src[j])) {
      dst[k] = src[i];
      i++;
    } else {
      dst[k] = src[j];
      j++;
    }
  }
}

void copy(int *src, int i, int j, int *dst)
{
  for (int k = i; k < j; k++) {
    dst[k] = src[k];
  }
}

void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
