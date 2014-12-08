// hoisting invariant control flow
// this could also be done via loop unswitching
// can we improve the test?

void motion_test10(int *data) {
  int j;
  int p = data[1];
  int i = data[0];
  do {
    if (p)
      j = 1;
    else
      j = 2;
    i = i + j;
    data[data[2]] = 2;
  } while (i < data[3]);
}

void motion_result10(int *data) {
  int j;
  int p = data[1];
  int i = data[0];
  if (p)
    j = 1;
  else
    j = 2;
  do {
    i = i + j;
    data[data[2]] = 2;
  } while (i < data[3]);
}

