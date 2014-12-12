// irreducible loops

void strength_result4(int *data) {
  int i;
  if (data[1]) {
    i = 42;
    goto here;
  }
  i = 0;
  do {
    i = i + 21;
  here:
    data[data[2]] = 2;
  } while (i < data[3]);
}

