// Don't expect anyone to get this.
// It could be done by first cloning the block
// containing the assignment to data[3].

void cprop_result8(int *data) {
  if (data[0])
    data[1] = 4;
  else
    data[2] = 3;
  data[3] = 210;
}

