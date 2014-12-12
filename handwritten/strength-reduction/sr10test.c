// linear function test replacement
// these could get more interesting

void strength_test10(int *data) {
  int stop = data[3];
  int i = 0;
  do {
    data[data[2]] = 21*i;
    i = i + 1;
  } while (i < stop);
}
