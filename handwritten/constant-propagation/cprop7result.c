// dags

void cprop_result7(int *data) {
  if (data[0])
    data[1] = 10;
  else
    data[2] = 15;
  data[3] = 26;
}

