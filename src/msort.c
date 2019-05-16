void msort(int length, int *xs, int *ys);
void msortsplit(int *src, int i, int j, int *dst);
void msortmerge(int *src, int start, int mid, int end, int *dst);
void copy(int len, int *src, int *dst);

void msort(int length, int *xs, int *ys)
{
  copy(length, xs, ys);
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

void copy(int len, int *src, int *dst)
{
  for (int i = 0; i < len; i++) {
    dst[i] = src[i];
  }
}
