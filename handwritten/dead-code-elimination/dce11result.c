// partially dead code

void dead_result11(int *data) {
  int i = data[0];
  int j = data[1];
  if (i & j)
    data[0] = i*j;
  j = data[2];
  data[j] = 2;
}

// can we make a case that can't be done with simple forward prop?
