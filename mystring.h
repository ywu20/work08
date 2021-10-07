#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen(char*s);
char* mystrncpy(char *dest, char *source, int n);
char* mystrcpy(char *dest, char *source);
char * mystrcat( char *dest, char *source);
char * mystrncat( char *dest, char *source, int n);
int mystrcmp( char *s1, char *s2 );
char * mystrchr( char *s, char c );
char * mystrstr( char *s1, char * s2 );

#endif
