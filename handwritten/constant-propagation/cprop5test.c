// dominators

void cprop_test5(int *data) {
  int j = 5;
  if (data[0])
    data[1] = 5 + j;
  else
    data[2] = 10 + j;
  data[3] = 20 + j;
}
