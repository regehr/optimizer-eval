// through expressions

void cprop_test2(int *data) {
  int j = 1;
  int k = 2;
  int m = 4;
  int n = k*m;
  j = n + j;
  data[0] = j;
}

void cprop_result2(int *data) {
  data[0] = 9;
}

