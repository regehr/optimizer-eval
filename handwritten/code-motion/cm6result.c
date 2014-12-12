// reassociation

void motion_result6(int *data) {
  int j = data[1];
  int k = data[2];
  int i = data[0];
  int n = data[3];
  int m = j + k;
  do
    i = m + i;
  while (i < n);
  data[4] = i;
}

