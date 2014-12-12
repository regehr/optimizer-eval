// global, across basic blocks, easy

void dead_test3(int *data) {
  int k = 0;
  int j = data[1];
  if (j) {
    k++;
    j = k + data[0]*j;
  }
  else
    k--;
  j = data[2];
  data[j] = 2;
  data[3] = k;
}

void dead_result3(int *data) {
  int k = 0;
  int j = data[1];
  if (j)
    k++;
  else
    k--;
  j = data[2];
  data[j] = 2;
  data[3] = k;
}

