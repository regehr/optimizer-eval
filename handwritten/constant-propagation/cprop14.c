// reassociation

void cprop_test14(int *data) {
  int i = 10;
  int j = data[0];
  int k = 20;
  int m = data[1];
  int n = 30;
  if (data[2])
    data[3] = i + j + k + m + n;
  else
    data[0] = i*(j - k*(m - n));
}

void cprop_result14(int *data) {
  int j = data[0];
  int m = data[1];
  if (data[2])
    data[3] = 60 + j + m;
  else
    data[0] = 10*(j - 20*(m - 30));
}

