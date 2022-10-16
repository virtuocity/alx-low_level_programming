/*Function prototypes*/
#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
