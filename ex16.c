#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef enum gender_t {
  MALE,
  FEMALE,
  OTHER
} Gender;

typedef struct person_t {
  char *name;
  int age;
  int height;
  int weight;
  Gender gender;
} Person;

Person *Person_create(char *name, int age, int height, int weight, Gender g) {
  Person *who = malloc(sizeof(Person));
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;
  who->gender = g;
  return who;
}

void Person_destroy(Person *p) {
  assert(p != NULL);
  free(p->name);
  free(p);
}

void Person_print(Person *p) {
  printf("%s - %d - %d - %d - %d\n", p->name, p->age, p->height, p->weight, p->gender);
}

int main(int argc, char **argv) {
  Person *teja = Person_create("Teja", 28, 60, 170, MALE);
  Person *boo = Person_create("Boo", 26, 60, 170, FEMALE);
  Person_print(teja);
  Person_print(boo);
  Person_destroy(teja);
  Person_destroy(boo);
  return 0;
}
