// loop unswitching

void motion_result11(int *data) {
  int p = data[1];
  int i = data[0];
  if (p) {
    do {
      i = i + 1;
      data[data[2]] = 2;
    } while (i < data[3]);
  }
  else {
    do {
      i = i + data[4];
      data[data[2]] = 2;
    } while (i < data[3]);
  }
}

