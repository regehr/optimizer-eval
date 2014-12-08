// loops

void motion_test3(int *data) {
  int i = 0;
  int k = data[2];
  int j = data[0];
  do
    i = 21*j + i + 1;
  while (i < k);
  data[4] = i;
}

void motion_result3(int *data) {
  int i = 0;
  int k = data[2];
  int j = 21*data[0];
  do
    i = j + i + 1;
  while (i < k);
  data[4] = i;
}

