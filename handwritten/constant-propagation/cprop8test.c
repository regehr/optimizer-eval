// Don't expect anyone to get this.
// It could be done by first cloning the block
// containing the assignment to data[3].

void cprop_test8(int *data) {
  int j, k;
  if (data[0]) {
    j = 4;
    k = 6;
    data[1] = j;
  }
  else {
    j = 7;
    k = 3;
    data[2] = k;
  }
  data[3] = (j + k)*21;
}
