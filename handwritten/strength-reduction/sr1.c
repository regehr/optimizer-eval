// induction variable and constant

void strength_test1(int *data) {
  int i = 0;
  do {
    data[data[2]] = 2;
    i = i + 1;
  } while (21*i < data[1]);
}

void strength_result1(int *data) {
  int i = 0;
  do {
    data[data[2]] = 2;
    i = i + 21;
  } while (i < data[1]);
}

