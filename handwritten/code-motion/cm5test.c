// irreducible loops

void motion_test5(int *data) {
  int i = 0;
  int j = data[0];
  if (data[1])
    goto here;
  j = data[3] + j;
  do {
    i++;
  here:
    data[i] = 21*j + i;
  } while (i < data[2]);
}
