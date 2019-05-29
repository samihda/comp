int search(int n, int len, int *list)
{
  for (int i = 0; i < len; i++) {
    if (n == list[i]) {
      return i;
    }
  }

  return -1;
}

int bsearch(int n, int len, int *list)
{
  int i = 0, j = len - 1;

  while (i <= j) {
    int k = (i + j) / 2;

    if (list[k] == n) {
      return k;
    }

    if (list[k] > n) {
      j = k - 1;
    } else {
      i = k + 1;
    }
  }

  return -1;
}
