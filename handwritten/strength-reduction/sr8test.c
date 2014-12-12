// mutual induction variables

void strength_test8(int *data) {
  int i = 0;
  do {
    int j = i + 1;
    data[data[2]] = j;
    i = j + 1;
  } while(21*i < data[3]);
}
