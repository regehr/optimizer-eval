// conditional value numbers
// Cliff Click can do this one

void vnum_test11(int *data) {
  int n;
  int stop = data[3];
  int j = data[1];
  int k = j;
  int i = 1;
  for (n = 0; n < stop; n++) {
    if (j != k)
      i = 2;
    if (i != 1)
      k = 2;
    data[data[2]] = 2;
  }
  data[1] = i;
}

void vnum_result11(int *data) {
  int n;
  int stop = data[3];
  for (n = 0; n < stop; n++)
    data[data[2]] = 2;
  data[1] = 1;
}

