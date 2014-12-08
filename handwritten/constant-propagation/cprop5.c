// dominators

void cprop_test5(int *data) {
  int j = 5;
  if (data[0])
    data[1] = 5 + j;
  else
    data[2] = 10 + j;
  data[3] = 20 + j;
}

void cprop_result5(int *data) {
  if (data[0])
    data[1] = 10;
  else
    data[2] = 15;
  data[3] = 25;
}

