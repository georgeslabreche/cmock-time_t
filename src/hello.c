#include <stdio.h>
#include <time.h>
#include "clock.h"

int say_hello()
{
  time_t time = get_time();
  printf("Hello, the time is %s", ctime(&time));

  return 0;
}
