// combining value numbering, constant prop, and
// elimination of unreachable code.
// Cliff Click can do this one

void vnum_result12(int *data) {
  int n;
  int stop = data[3];
  for (n = 0; n < stop; n++)
    data[data[2]] = 2;
  data[1] = 1;
}

