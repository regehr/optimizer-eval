// increment by region constant

void strength_result6(int *data) {
  int j = 21*data[0];
  int i = 21*data[1];
  do {
    data[data[2]] = 2;
    i = i + j;
  } while (i < data[3]);
}

