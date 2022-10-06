#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints character
 * int prototype
 * char prototype
 * void prototype
 */

int _putchar(char c);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*MAIN_H*/
