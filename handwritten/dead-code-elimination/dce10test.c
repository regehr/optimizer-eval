// dead control flow, loops, aggressive
// removing a potentially infinite loop can change the behavior
// of a non-terminating program

// might rework this example a bit

void dead_test10(int *data) {
  int k = 0;
  int j;
  for (j = 0; data[0]; j++)
    k++;
  j = data[2];
  data[j] = 2;
}

void dead_result10(int *data) {
  int j = data[2];
  data[j] = 2;
}
