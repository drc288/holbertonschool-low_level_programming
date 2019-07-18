#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Other functions */
int _strlen_recursion(char *s);

/* Pint 0x08 */
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
