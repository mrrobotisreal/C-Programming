#include <stdio.h>
#include <string.h>

int main()
{
  char roar[10];
  int i;
  puts("\nEnter your roar: ");
  scanf("%10s", roar);
  printf("Sad roar sounds like: %s...\n", roar);
  for (i = 0; roar[i] != '\0'; i++) {
    if (roar[i] >= 'a' && roar[i] <= 'z') {
      roar[i] = roar[i] - 32;
    }
  }
  printf("Happy roar sounds like: %s!!!\n", roar);
  return 0;
}