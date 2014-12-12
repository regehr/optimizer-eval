// dags

void cprop_test7(int *data) {
  int j;
  if (data[0]) {
    j = 5;
    data[1] = 10;
  }
  else {
    data[2] = 15;
    j = 5;
  }
  data[3] = j + 21;
}
