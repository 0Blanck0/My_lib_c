/*
** ETNA PROJECT, 12/01/2021 by elisab_a
** 
** File description:
**      headers for mylib
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>

//Lib functions
void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(const char *str);
int my_getnbr(const char *str);
void my_putnbr(int nb);
void my_isneg(int nb);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, int n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int nb);
char *my_strstr(char *str, const char *to_find);
char *my_strdup(const char *src);
char **my_str_to_word_array(const char *str);
char *my_strchr(const char *s, int c);
char *my_readline(void);

// stats.c functions
void printFileProperties(struct stat stats);
int isDirectory(struct stat stats);
int getFilePermissions(struct stat stats);

// convert.c function
int decimalToOctal(int decimalnum);
char* convertUidToUser(struct stat stats);
char* convertUidToGroup(struct stat stats);

#endif