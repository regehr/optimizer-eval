// local, easy

void dead_test1(int *data) {
  int j = data[0] + data[1];
  j = data[2];
  data[j] = 2;
}

void dead_result1(int *data) {
  int j;
  j = data[2];
  data[j] = 2;
}

