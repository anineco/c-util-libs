// test_die.c

#include <stdio.h>
#include "utils.h"

int main(void)
{
  char *name = "Gott";
  die("%s ist tot!", name);
  fprintf(stderr, "This message never be displayed.");
  return 0;
}
