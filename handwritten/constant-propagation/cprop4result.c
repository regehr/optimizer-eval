// extended basic blocks
// illustrate problem I saw in old version of gcc

void cprop_result4(int *data) {
  if (data[0])
    data[1] = 11112;
  else
    data[2] = -12212;
}

