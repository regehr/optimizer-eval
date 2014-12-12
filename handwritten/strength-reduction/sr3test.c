// multiplying 2 induction variables

void strength_test3(int *data) {
  int i = data[0];
  int j = data[1];
  do {
    data[data[2]] = 2;
    i = i + 1;
    j = j + 1;
  } while (i*j < data[3]);
}
