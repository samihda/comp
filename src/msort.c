void copy(int len, int *src, int *dst)
{
  for (int i = 0; i < len; i++) {
    dst[i] = src[i];
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
