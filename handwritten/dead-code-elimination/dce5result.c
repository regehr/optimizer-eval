// around loops, simple

void dead_test5(int *data) {
  int i, j;
  int k = 0;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    k = k * data[1];
    j = data[2];
    data[j] = 2;
  }
}

void dead_result5(int *data) {
  int i, j;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    j = data[2];
    data[j] = 2;
  }
}

