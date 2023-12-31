#ifndef _MAIN_H
#define _MAIN_H

char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* _MAIN_H */
