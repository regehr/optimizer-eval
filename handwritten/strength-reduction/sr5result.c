// control flow in loop

void strength_result5(int *data) {
  int i = 0;
  while (1) {
    i = i + 21;
    if (data[1] && i > data[3])
      break;
    data[data[2]] = 2;
  }
}

