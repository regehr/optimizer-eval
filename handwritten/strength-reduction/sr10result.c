// linear function test replacement
// these could get more interesting

void strength_result10(int *data) {
  int stop = 21*data[3];
  int i = 0;
  do {
    data[data[2]] = i;
    i = i + 21;
  } while (i < stop);
}

