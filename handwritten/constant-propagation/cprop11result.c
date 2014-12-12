// conditional constants, hard

void cprop_result11(int *data) {
  int i;
  int stop = data[0];
  for (i = 1; i < stop; i++)
    ;
  data[1] = 1;
  data[2] = i;
}

