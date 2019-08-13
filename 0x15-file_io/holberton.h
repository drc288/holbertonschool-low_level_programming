#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
/* OPEN */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* CLOSE */
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);


#endif
