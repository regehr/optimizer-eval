// conditional constants, hard

void cprop_test11(int *data) {
  int i;
  int stop = data[0];
  int j = 1;
  for (i = 1; i < stop; i++)
    if (!j)
      j = i;
  data[1] = j;
  data[2] = i;
}

void cprop_result11(int *data) {
  int i;
  int stop = data[0];
  for (i = 1; i < stop; i++)
    ;
  data[1] = 1;
  data[2] = i;
}

