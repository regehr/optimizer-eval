// multiplying 2 induction variables

void strength_result3(int *data) {
  int i = data[0];
  int j = data[1];
  int k = i*j;
  do {
    data[data[2]] = 2;
    i = i + 1;
    k = k + j;
    j = j + 1;
    k = k + i;
  } while (k < data[3]);
}

