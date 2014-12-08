// induction variable and region constant

void strength_test2(int *data) {
  int k = data[0];
  int i = 0;
  do {
    data[data[2]] = 2;
    i = i + 1;
  } while (k*i < data[1]);
}

void strength_result2(int *data) {
  int k = data[0];
  int i = 0;
  do {
    data[data[2]] = 2;
    i = i + k;
  } while (i < data[1]);
}

