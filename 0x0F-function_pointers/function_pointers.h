#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */
