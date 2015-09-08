#include <stdio.h>
#include <string.h>

void manipulate(char *s) {
  *s = 'b';
}

int main(int argc, char *argv[]) {
  char *s = "str";
  int i = 0;
  int *i1 = &i;
  int **i2 = &i1;

  printf("%p %p\n", i1, i2);
  printf("%p, %p\n", i1, *i2);
  return 0;
}
