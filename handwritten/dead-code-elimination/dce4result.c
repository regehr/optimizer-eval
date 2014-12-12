// global, across basic blocks, more interesting

void dead_result4(int *data) {
  int k = 0;
  int j = data[1];
  if (j)
    k++;
  else
    k--;
  if (data[4] & 1)
    k++;
  else
    k--;
  j = data[2];
  data[j] = 2;
  data[3] = k;
}

