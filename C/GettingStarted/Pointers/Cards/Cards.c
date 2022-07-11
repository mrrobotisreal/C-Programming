#include <stdio.h>

int main()
{
  // char cards[] = "JQK";
  // char a_card = cards[2];
  // cards[2] = cards[1];
  // cards[1] = cards[0];
  // cards[0] = cards[2];
  // cards[2] = cards[1];
  // cards[1] = a_card;
  // puts(cards);

  char masked_raider[] = "Alive";
  char *jimmy = masked_raider;
  printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);

  masked_raider[0] = 'D';
  masked_raider[1] = 'E';
  masked_raider[2] = 'A';
  masked_raider[3] = 'D';
  masked_raider[4] = '!';

  printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);

  return 0;
}