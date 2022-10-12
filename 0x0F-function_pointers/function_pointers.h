#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void _puts_recursion(char *s);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*FUNCTION_POINTER*/
