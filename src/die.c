#include <stdio.h>

#include "colours.h"

void die(const char* err_msg)
{
  printf(red"%s", err_msg);
}
