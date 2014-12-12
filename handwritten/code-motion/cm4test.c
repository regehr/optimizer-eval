// loops
// see if they're smart enough to hoist a divide
// (in this case, a safe move)

void motion_test4(int *data) {
  int i = 0;
  int j = data[2];
  do {
    data[i] = 2/j + i - 1;
    i++;
  } while (i < data[2]);
}
