#include "caesar.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char *string, size_t len, int shift){
  for(size_t i = 0; i < len; i++){
    if(isupper(string[i])){
      string[i] = forUpper(string[i], shift);
    } else if (islower(string[i])){
      string[i] = forLower(string[i], shift);
    }
  }
}

char forLower(char c, int shift){
  return ((int)c - LOWER + shift) % 26 + LOWER;
}

char forUpper(char c, int shift){
  return ((int)c - UPPER + shift) % 26 + UPPER;
}
