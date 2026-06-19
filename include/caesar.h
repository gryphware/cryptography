#ifndef CAESAR_H
#define CAESAR_H

#define LOWER 97
#define UPPER 65

#include <stdio.h>

void caesarCipher(char *string, size_t len, int shift);
char forLower(char c, int shift);
char forUpper(char c, int shift);

#endif
