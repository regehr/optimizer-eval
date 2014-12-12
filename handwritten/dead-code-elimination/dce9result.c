// dead control flow, loops, conservative

void dead_result9(int *data) {
  int j = data[2];
  data[j] = 2;
}

