// increment by region constant

void strength_test6(int *data) {
  int j = data[0];
  int i = data[1];
  do {
    data[data[2]] = 2;
    i = i + j;
  } while (21*i < data[3]);
}

void strength_result6(int *data) {
  int j = 21*data[0];
  int i = 21*data[1];
  do {
    data[data[2]] = 2;
    i = i + j;
  } while (i < data[3]);
}

