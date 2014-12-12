// extended basic blocks

void cprop_test3(int *data) {
  int j = 12345;
  if (data[0])
    data[1] = 1 + j - 1234;
  else
    data[2] = 123 + j + 10;
}
