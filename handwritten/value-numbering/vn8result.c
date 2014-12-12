// loops

void vnum_result8(int *data) {
  int i;
  int stop = data[3];
  for (i = 0; i < stop; i++) {
    int k = data[2];
    data[k] = 2;
    data[0] = 0;
  }
}

