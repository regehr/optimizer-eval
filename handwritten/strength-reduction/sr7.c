// monotonic induction variables

void strength_test7(int *data) {
  int i = 0;
  do {
    if (data[1])
      i = i + 1;
    else
      i = i + 2;
    data[data[2]] = 2;
  } while (21*i < data[3]);
}

void strength_result7(int *data) {
  int i = 0;
  do {
    if (data[1])
      i = i + 21;
    else
      i = i + 42;
    data[data[2]] = 2;
  } while (i < data[3]);
}

