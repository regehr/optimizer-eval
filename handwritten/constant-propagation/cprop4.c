// extended basic blocks
// illustrate problem I saw in old version of gcc

void cprop_test4(int *data) {
  int j = 12345;
  if (data[0])
    data[1] = 1 + j - 1234;
  else
    data[2] = 123 - j + 10;
}

void cprop_result4(int *data) {
  if (data[0])
    data[1] = 11112;
  else
    data[2] = -12212;
}

