// dominators

void vnum_result6(int *data) {
  int j = data[1]*data[3];
  if (data[0])
    j = j + 3;
  else
    j = j - 3;
  j = data[2] + j;
  data[j] = 2;
  data[4] = 0;
}

