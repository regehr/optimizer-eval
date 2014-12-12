// reassociation

void motion_test6(int *data) {
  int j = data[1];
  int k = data[2];
  int i = data[0];
  int n = data[3];
  do
    i = j + i + k;
  while (i < n);
  data[4] = i;
}
