// dominators
// another problem with gcc

void cprop_result6(int *data) {
  if (data[0])
    data[1] = 50;
  else
    data[2] = 75;
  data[3] = 105;
}

