#ifndef _FACTOR_H_
#define _FACTOR_H_
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE

typedef uint64_t u_int64_t;
/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int factorize(char *buffer);
#endif /* _FACTOR_H_ */

