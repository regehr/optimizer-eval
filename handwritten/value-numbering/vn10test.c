// conditional-based assertion, derived
// quite hard, I think

void vnum_test10(int *data) {
  int i = data[0];
  int m = i + 1;
  int j = data[1];
  int n = j + 1;
  data[2] = m + n;
  if (i == j)
    data[3] = (m - n)*21;
}
