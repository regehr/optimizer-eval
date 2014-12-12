// within basic block, commutativity

void vnum_result4(int *data) {
  int k = data[2];
  data[k] = 2;
  data[0] = 0;
}

