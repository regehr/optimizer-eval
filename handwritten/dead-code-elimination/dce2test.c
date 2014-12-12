// local

void dead_test2(int *data) {
  int j = data[0] + data[1];
  int k = j + data[2];
  int m = k + data[3];
  int n = m + data[4];
  j = data[2];
  data[j] = 2;
}
