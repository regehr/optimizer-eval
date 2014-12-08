// dead control flow, conditionals, interesting

void dead_test8(int *data) {
  int i;
  int k = 0;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    int j = data[1] + k;
    if (j)
      k++;
    else
      k--;
    j = data[2];
    data[j] = 2;
  }
}

void dead_result8(int *data) {
  int i;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    int j = data[2];
    data[j] = 2;
  }
}

