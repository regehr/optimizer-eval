// loop rotation
// might be handled by front end translating while loop into
// an if containing a do-while loop (which I consider a good approach)

void motion_result8(int *data) {
  int i = 0;
  int j = data[0];
  if (i < data[2]) {
    j = j*21;
    do {
      data[i] = 21*j + i;
      i++;
    } while (i < data[2]);
  }
}

