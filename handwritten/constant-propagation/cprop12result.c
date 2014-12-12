// conditional-based assertions

void cprop_result12(int *data) {
  int j = data[0];
  if (j == 5)
    j = 110;
  data[1] = j;
}

