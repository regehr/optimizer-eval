// dags

void vnum_result7(int *data) {
  int i;
  if (data[0]) {
    i = data[2];
    data[i] = 2;
  }
  data[0] = 0;
}

