// around loops, simple

void dead_result5(int *data) {
  int i, j;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    j = data[2];
    data[j] = 2;
  }
}

