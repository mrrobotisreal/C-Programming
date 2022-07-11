// This code will not work, we need pointers to make it work properly
// #include <stdio.h>

// void go_southeast(int lat, int lon)
// {
//   lat = lat - 1;
//   lon = lon + 1;
// }

// int main()
// {
//   int latitude = 32;
//   int longitude = -64;
//   go_southeast(latitude, longitude);
//   printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
//   return 0;
// }

#include <stdio.h>

void go_southeast(int *lat, int *lon)
{
  puts("Heading southeast now!");
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main()
{
  int latitude = 32;
  int longitude = -64;
  printf("Starting at: [%i, %i]\n", latitude, longitude);
  go_southeast(&latitude, &longitude);
  printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

  int nums[] = {1, 2, 3};
  printf("nums is at %p\n", nums);
  printf("nums + 1 is at %p\n", nums + 1);

  int doses[] = {1, 2, 3, 1000};
  printf("Issue dose %i\n", 3[doses]);
  return 0;
}