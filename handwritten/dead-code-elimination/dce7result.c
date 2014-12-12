// dead control flow, conditionals, simple

void dead_test7(int *data) {
  int k = 0;
  int j = data[2];
  data[j] = 2;
  if (j)
    k++;
  else
    k--;
}

void dead_result7(int *data) {
  int j = data[2];
  data[j] = 2;
}

