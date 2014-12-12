// dags

void vnum_test7(int *data) {
  int i, j, k;
  int m = data[1];
  int n = data[3];
  if (data[0]) {
    j = m*n;
    i = data[2];
    data[i] = 2;
    k = m*n;
  }
  else {
    j = 5;
    k = 5;
  }
  data[0] = k - j;
}
