// control flow in loop

void strength_test5(int *data) {
  int i = 0;
  while (1) {
    i = i + 1;
    if (data[1] && 21*i > data[3])
      break;
    data[data[2]] = 2;
  }
}
