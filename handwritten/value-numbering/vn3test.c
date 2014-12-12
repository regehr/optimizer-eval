// within basic block

void vnum_test3(int *data) {
  int n;
  int j = data[1]*data[3];
  int i = data[3];
  int m = data[1];
  int k = data[2];
  data[k] = 2;
  n = m*i;
  data[0] = n - j;
}
