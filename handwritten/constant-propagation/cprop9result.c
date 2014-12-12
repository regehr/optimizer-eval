// loops

void cprop_result9(int *data) {
  int i;
  int stop = data[0];
  for (i = 1; i < stop; i++)
    ;
  data[1] = 21;
  data[2] = i;
}

