// test_die.c

#include <stdio.h>
#include "utils.h"

int main(void)
{
  char *name = "non-existent-file-name";
  FILE *in;

  in = fopen(name, "r");
  if (in == NULL) {
    die("can't open '%s'", name);
  }
  fprintf(stderr, "This message never be output.");
  return 0;
}
