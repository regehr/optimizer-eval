// dead control flow, loops, conservative

void dead_test9(int *data) {
  int k = 0;
  int j;
  for (j = 0; j < 5; j++)
    k++;
  j = data[2];
  data[j] = 2;
}

void dead_result9(int *data) {
  int j = data[2];
  data[j] = 2;
}

