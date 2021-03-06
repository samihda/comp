void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void copy(int len, int *src, int *dst)
{
  for (int i = 0; i < len; i++) {
    dst[i] = src[i];
  }
}

int partition(int lo, int hi, int *list)
{
  int pivot = list[lo + (hi - lo) / 2];
  int i = lo - 1;
  int j = hi + 1;

  while (1) {
    do {
      i++;
    } while (list[i] < pivot);

    do {
      j--;
    } while (list[j] > pivot);

    if (i >= j) {
      return j;
    }

    swap(&list[i], &list[j]);
  }

  return j;
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

void msortmerge(int start, int mid, int end, int *src, int *dst)
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

void msortsplit(int i, int len, int *tmp, int *list)
{
  if (len - i < 2) {
    return;
  }

  int mid = (i + len) / 2;
  msortsplit(i, mid, list, tmp);
  msortsplit(mid, len, list, tmp);
  msortmerge(i, mid, len, tmp, list);
}

void msort(int length, int *list, int *tmp)
{
  copy(length, list, tmp);
  msortsplit(0, length, tmp, list);
}

void qsort(int lo, int hi, int *list)
{
  if (lo < hi) {
    int mid = partition(lo, hi, list);
    qsort(lo, mid, list);
    qsort(mid + 1, hi, list);
  }
}
