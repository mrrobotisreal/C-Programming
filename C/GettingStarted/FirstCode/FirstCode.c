#include <stdio.h>
#include <stdlib.h>

void withSwitch()
{
  char switch_card_name[3];
  puts("Enter the switch_card_name: ");
  scanf("%2s", switch_card_name);
  int switch_val = 0;
  switch (switch_card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      switch_val = 10;
      break;
    case 'A':
      switch_val = 11;
      break;
    default:
      switch_val = atoi(switch_card_name);
  }
  printf("The card is worth %i points\n", switch_val);
}

int main()
{
  char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'K') {
    val = 10;
  } else if (card_name[0] == 'Q') {
    val = 10;
  } else if (card_name[0] == 'J') {
    val = 10;
  } else if (card_name[0] == 'A') {
    val = 11;
  } else {
    val = atoi(card_name);
  }
  if ((val > 2) && (val < 7)) {
    puts("Count has gone up");
  } else if (val == 10) {
    puts("Count has gone down, not sure why though");
  }
  withSwitch();
  return 0;
}