#include "caesar.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char someText[] = "hello?";
  size_t len = strlen(someText);
  int shift = 6;

  printf("before: %s\n", someText);

  caesarCipher(someText, len, shift);

  printf("after: %s\n", someText);

  return EXIT_SUCCESS;
}
