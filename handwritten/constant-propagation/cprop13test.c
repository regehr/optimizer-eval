// conditional-based assertions

void cprop_test13(int *data) {
  int j = data[1];
  int k = data[0];
  if (j == 5 && k == 10)
    j = j*21 + 100/k;
  data[2] = j;
}
