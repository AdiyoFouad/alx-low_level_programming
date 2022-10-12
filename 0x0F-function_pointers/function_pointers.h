#ifndef FUNCTION_POINTERS_H_INCLUDED
#define FUNCTION_POINTERS_H_INCLUDED


int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNCTION_POINTERS_H_ */
