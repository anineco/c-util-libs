// tst_getutime.c

#include <stdio.h>
#include <stdlib.h> // atol
#include <unistd.h> // sleep

#include "getutime.h"

static void delay(long loops, long secret)
{
  for (long i = loops; i >= 0; i--) {
    if (i == secret) {
      printf("loops=%ld\n", loops);
    }
  }
}

int main(int argc, char *argv[])
{
  long loops = (argc == 2) ? atol(argv[1]) : 100000000L;
  getutime(0);
  delay(loops, loops / 2);
  printf("%ldms\n", getutime(1));
  return 0;
}
