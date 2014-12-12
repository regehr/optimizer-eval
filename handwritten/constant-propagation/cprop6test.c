// dominators
// another problem with gcc

void cprop_test6(int *data) {
  int j = 5;
  if (data[0])
    data[1] = 10*j;
  else
    data[2] = 15*j;
  data[3] = 21*j;
}
