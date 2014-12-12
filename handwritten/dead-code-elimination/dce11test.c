// partially dead code

void dead_test11(int *data) {
  int i = data[0];
  int j = data[1];
  int k = i*j;
  if (i & j)
    data[0] = k;
  j = data[2];
  data[j] = 2;
}

// can we make a case that can't be done with simple forward prop?
