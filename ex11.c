#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  char *states[] = {
    "Florida", "Georgia", "Tennessee"
  };

  for (i = 0; i < 3; i++) {
    printf("State %d : %s\n", i, states[i]);
  }

  return 0;
}
