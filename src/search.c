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
  int lo = 0, hi = len - 1;

  while (lo <= hi) {
    int mid = (lo + hi) / 2;

    if (list[mid] == n) {
      return mid;
    }

    if (list[mid] > n) {
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }

  return -1;
}

int bsearch_(int n, int len, int *list)
{
  int i = 0;

  for (int jump = len / 2; jump >= 1; jump /= 2) {
    while (i + jump < len && list[i + jump] <= n) {
      i += jump;
    }
  }

  return list[i] == n ? i : -1;
}
