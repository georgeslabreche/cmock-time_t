#include "unity.h"
#include "mock_clock.h"
#include "hello.h"


void test_hello(void)
{
  struct tm tm;

  tm.tm_year = 2020 - 1900; /* years since 1900 */
  tm.tm_mon = 3 - 1;
  tm.tm_mday = 1;
  tm.tm_hour = 13;
  tm.tm_min = 25;
  tm.tm_sec = 45;

  time_t time = mktime(&tm);  // t is now your desired time_t

  get_time_IgnoreAndReturn(time);

  int res = say_hello();
  TEST_ASSERT_EQUAL(0, res);
}
