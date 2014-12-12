// edge placement

void motion_test2(int *data) {
  int j;
  int i = 1;
  if (data[1]) {
    data[data[2]] = 2;
    j = data[0] + data[3];
    i = i + j;
  }
  data[4] = data[0] + data[3];
  data[5] = i;
}
