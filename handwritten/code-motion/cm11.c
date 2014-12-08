// loop unswitching

void motion_test11(int *data) {
  int p = data[1];
  int i = data[0];
  do {
    if (p)
      i = i + 1;
    else
      i = i + 2;
    data[data[2]] = 2;
  } while (i < data[3]);
}

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
      i = i + 2;
      data[data[2]] = 2;
    } while (i < data[3]);
  }
}

