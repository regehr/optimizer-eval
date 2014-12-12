// extended basic blocks

void cprop_result3(int *data) {
  if (data[0])
    data[1] = 11112;
  else
    data[2] = 12478;
}

