// extended basic blocks

void vnum_result5(int *data) {
  int j = data[1]*data[3];
  if (data[3] == 3) {
    int k = data[2];
    data[k] = 2;
    data[0] = 0;
  }
  else if (data[0] & 1) {
    j = 3 + data[2] - j;
    data[j] = 2;
  }
}

