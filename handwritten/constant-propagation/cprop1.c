// local

void cprop_test1(int *data) {
  int j = 1 + 2*4;
  data[0] = j;
}

void cprop_result1(int *data) {
  data[0] = 9;
}

