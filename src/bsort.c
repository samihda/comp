void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bsort(int length, int *list)
{
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (list[j] > list[j + 1]) {
        swap(&list[j], &list[j + 1]);
      }
    }
  }
}
