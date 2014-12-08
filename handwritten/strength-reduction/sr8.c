// mutual induction variables

void strength_test8(int *data) {
  int i = 0;
  do {
    int j = i + 1;
    data[data[2]] = j;
    i = j + 1;
  } while(21*i < data[3]);
}

void strength_result8(int *data) {
  int i = 0;
  int n = 0;
  do {
    int j = i + 1;
    n = n + 21;
    data[data[2]] = j;
    i = j + 1;
    n = n + 21;
  } while(n < data[3]);
}

