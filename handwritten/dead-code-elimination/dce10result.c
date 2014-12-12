// dead control flow, loops, aggressive
// removing a potentially infinite loop can change the behavior
// of a non-terminating program

// might rework this example a bit

void dead_result10(int *data) {
  int j = data[2];
  data[j] = 2;
}
