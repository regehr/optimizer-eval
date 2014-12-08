// conditional-based assertions, simple

void vnum_test9(int *data) {
  int i = data[0];
  int j = data[1];
  if (i == j)
    data[2] = (i - j)*21;
  else
    data[2] = i + j;
}

void vnum_result9(int *data) {
  int i = data[0];
  int j = data[1];
  if (i == j)
    data[2] = 0;
  else
    data[2] = i + j;
}

