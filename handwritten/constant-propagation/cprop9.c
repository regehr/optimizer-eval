// loops

void cprop_test9(int *data) {
  int i;
  int stop = data[0];
  int j = 21;
  for (i = 1; i < stop; i++)
    j = (j - 20)*21;
  data[1] = j;
  data[2] = i;
}

void cprop_result9(int *data) {
  int i;
  int stop = data[0];
  for (i = 1; i < stop; i++)
    ;
  data[1] = 21;
  data[2] = i;
}

