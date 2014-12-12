// conditional-based assertions

void cprop_result13(int *data) {
  int j = data[1];
  int k = data[0];
  if (j == 5 && k == 10)
    j = 115;
  data[2] = j;
}

