void msort(int length, int *list, int *tmp);
void msortsplit(int *src, int i, int j, int *dst);
void msortmerge(int *src, int start, int mid, int end, int *dst);
void copy(int len, int *src, int *dst);

void msort(int length, int *list, int *tmp)
{
  copy(length, list, tmp);
  msortsplit(tmp, 0, length, list);
}

void msortsplit(int *tmp, int i, int len, int *list)
{
  if (len - i < 2) {
    return;
  }

  int mid = (i + len) / 2;
  msortsplit(list, i, mid, tmp);
  msortsplit(list, mid, len, tmp);
  msortmerge(tmp, i, mid, len, list);
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

void copy(int len, int *src, int *dst)
{
  for (int i = 0; i < len; i++) {
    dst[i] = src[i];
  }
}
