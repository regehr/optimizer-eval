// conditional constants, simple

void cprop_test10(int *data) {
  int j = 1;
  if (j)
    j = 10;
  else
    j = data[0];
  data[0] = 21*j + data[1];
}
