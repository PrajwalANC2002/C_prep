#include <stdio.h>

void hello_world(char *name) {
  printf("Hello, %s!\n", name);
  printf("Bye, %s!\n", name);
}

int main() {
    hello_world("Alok");
}