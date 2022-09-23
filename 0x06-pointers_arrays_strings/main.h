#ifndef MAIN_H
#define MAIN_H
int _putchar (char c);
#include <stdio.h>
/**
 *void prototype()
 *int prototypes()
 *char prototypes()
 */
void print_number(int n);
void reverse_array(int *a, int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
