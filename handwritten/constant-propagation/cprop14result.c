// reassociation

void cprop_result14(int *data) {
  int j = data[0];
  int m = data[1];
  if (data[2])
    data[3] = 60 + j + m;
  else
    data[0] = 10*(j - 20*(m - 30));
}

