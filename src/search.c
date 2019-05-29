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
  /**
   * Check the middle element
   * Return index if found
   * Otherwise repeat on first or second half of array accordingly
   * May return any index of the element in case of duplicates
   */

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
  /**
   * Jump from the start to the middle point
   * while keep halving the jump distance
   * Jump shorter if the middle element is found or still too small
   * Otherwise continue jumping from middle point instead
   * Return rightmost index of the element in case of duplicates
   */

  int i = 0;

  for (int jump = len / 2; jump >= 1; jump /= 2) {
    while (i + jump < len && list[i + jump] <= n) {
      i += jump;
    }
  }

  return list[i] == n ? i : -1;
}
