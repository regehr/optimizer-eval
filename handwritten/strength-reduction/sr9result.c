// multiple strides

void strength_result9(int *data) {
  int i = 0;
  int j = 0;
  do {
    data[data[2]] = i;
    i = i + 1;
    j = j + 21;
  } while (j < data[3]);
}

