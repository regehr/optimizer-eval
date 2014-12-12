// dead control flow, conditionals, interesting

void dead_result8(int *data) {
  int i;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    int j = data[2];
    data[j] = 2;
  }
}

