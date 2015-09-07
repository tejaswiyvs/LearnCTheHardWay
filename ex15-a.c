#include <stdio.h>
#include <string.h>

void manipulate(char *c) {
  *c = 'b';
}

int main(int argc, char *argv[]) {

  char ch_a = 'a';
  char *ch_b = &ch_a;
  manipulate(ch_b);

  printf("%c, %c\n", ch_a, *ch_b);

  int a[] = { 1, 2, 3, 4, 5};
  void *aptr = a;
  aptr = aptr + 3;

  int *bptr = aptr;

  printf("%p, %p\n", a, aptr);

  int i = 0;
  for (i = 0; i < 5; i++) {
    printf("%d\t%d\t%d\n", bptr[i], *(a + i), *(bptr + i));
  }

  return 0;
}
