// multiple strides

void strength_test9(int *data) {
  int i = 0;
  do {
    data[data[2]] = i;
    i = i + 1;
  } while (21*i < data[3]);
}

void strength_result9(int *data) {
  int i = 0;
  int j = 0;
  do {
    data[data[2]] = i;
    i = i + 1;
    j = j + 21;
  } while (j < data[3]);
}

