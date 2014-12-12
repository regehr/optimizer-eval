// dominators

void vnum_test6(int *data) {
  int n;
  int j = data[1]*data[3];
  int m = data[1];
  int k = j;
  if (data[0])
    j = j + 3;
  else
    j = j - 3;
  n = data[3];
  j = data[2] + j;
  data[j] = 2;
  data[4] = k - m*n;
}
