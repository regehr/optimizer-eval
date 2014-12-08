// expressions

void vnum_test1(int *data) {
  data[0] = data[1]*data[3] - data[1]*data[3];
}

void vnum_result1(int *data) {
  data[0] = 0;
}

