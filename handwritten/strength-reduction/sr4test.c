// irreducible loops

void strength_test4(int *data) {
  int i;
  if (data[1]) {
    i = 2;
    goto here;
  }
  i = 0;
  do {
    i = i + 1;
  here:
    data[data[2]] = 2;
  } while (21*i < data[3]);
}
