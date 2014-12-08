// extended basic blocks

void vnum_test5(int *data) {
  int j = data[1]*data[3];
  if (data[3] == 3) {
    int n;
    int i = data[3];
    int m = data[1];
    int k = data[2];
    data[k] = 2;
    n = m*i;
    data[0] = n - j;
  }
  else if (data[0] & 1) {
    j = 3 + data[2] - j;
    data[j] = 2;
  }
}

void vnum_result5(int *data) {
  int j = data[1]*data[3];
  if (data[3] == 3) {
    int k = data[2];
    data[k] = 2;
    data[0] = 0;
  }
  else if (data[0] & 1) {
    j = 3 + data[2] - j;
    data[j] = 2;
  }
}

