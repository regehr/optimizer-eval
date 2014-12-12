// dags
// could be handled by cloning followed by value numbering

void motion_result1(int *data) {
  int i, j;
  if (data[1]) {
    j = data[0] + data[3];
    i = j;
  }
  else {
    data[data[2]] = 2;
    i = 5;
    j = data[0] + data[3];
  }
  data[3] = j;
  data[4] = i;
}

