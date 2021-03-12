// test_debug.c

#include <stdio.h>
#include "utils.h"

int main(void)
{
  int a = 1, b = 2;
  debug("a=%d", a);
  debugvar("%d", b);
  return 0;
}
