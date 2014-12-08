// conditional-based assertions

void cprop_test12(int *data) {
  int j = data[0];
  if (j == 5)
    j = j*21 + 25/j;
  data[1] = j;
}

void cprop_result12(int *data) {
  int j = data[0];
  if (j == 5)
    j = 110;
  data[1] = j;
}

