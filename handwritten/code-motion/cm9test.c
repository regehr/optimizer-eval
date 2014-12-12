// loop rotation
// same test as 8, but building the loop out of gotos.

void motion_test9(int *data) {
  int i = 0;
  int j = data[0];
 loop:
  if (i >= data[2])
    return;
  data[i] = 21*j + i;
  i++;
  goto loop;
}
