// tst_utils.c

#include <stdio.h>
#include "utils.h"

int main(void)
{
  FILE *in;
  char *name = "this_file_does_not_exist";
  check(in = fopen(name, "r"), "can't open %s", name);
  return 0;
}
