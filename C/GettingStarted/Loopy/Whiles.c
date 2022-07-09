#include <stdio.h>

int main()
{
  int counter = 11;
  while (counter > 0) {
    if (counter == 1) {
      printf("Only %i more bottle to go yo!\n", counter);
    } else {
      printf("Drink %i more bottles of beer yo!\n", counter);
    }
    counter--;
  }
  counter = 11;
  printf("Done with while loop, moving on to DO WHILE\n");
  do {
    if (counter == 1) {
      printf("Only %i more bottle to go yo!!!\n", counter);
    } else {
      printf("Drink %i more bottles of pepto bismol yo!!!\n", counter);
    }
    counter--;
  } while (counter > 0);
  return 0;
}