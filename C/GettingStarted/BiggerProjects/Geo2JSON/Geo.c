#include <stdio.h>

int main()
{
  float latitude;
  float longitude;
  char info[80];
  int started = 0;

  puts("[");
  while (scanf("%f,%f,%79[^\n]", &latitude, &latitude, info) == 3) {
    if (started) {
      printf(",\n");
    } else {
      started = 1;
    }
    printf("{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude, longitude, info);
  }
  puts("\n]");
  return 0;
}