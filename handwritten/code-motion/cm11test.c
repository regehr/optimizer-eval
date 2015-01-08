// loop unswitching

void motion_test11(int *data) {
  int p = data[1];
  int i = data[0];
  do {
    if (p)
      i = i + 1;
    else
      i = i + data[4];
    data[data[2]] = 2;
  } while (i < data[3]);
}
