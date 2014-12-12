// aggressive
// moves an expression onto a path where it may not have been executed,
// possibly slowing the code

void motion_test7(int *data) {
  int i = data[1];
  int j = data[0];
  do {
    if (i & 1)
      data[data[2]] = 21*j + i;
    i++;
  } while (i < data[3]);
}
