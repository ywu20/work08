#include<stdio.h>
//strlen [ int mystrlen( char *s ) ]
int mystrlen(char*s){
  int len = 0;
  while(*s){
    len++;
    s++;
  }
  return len;
}

//strcpy/strncpy (choose one) [ char * mystrcpy( char *dest, char *source ) char * mystrncpy( char *dest, char *source, int n) ]
char* mystrncpy(char *dest, char *source, int n){
  char * temp = dest;
  while (--n){
    *dest = *source;
    dest++;
    source++;
  }
  return temp;
}
 //mystrcpy
char* mystrcpy(char *dest, char *source){
  char * temp = dest;
  while (*source){
    *dest = *source;
    dest++;
    source++;
  }
  *dest = *source;
  return temp;
}

//strcat/strncat (choose one) [ char * mystrcat( char *dest, char *source ) char * mystrncat( char *dest, char *source, int n) ]
char * mystrcat( char *dest, char *source){
  char * temp = dest;
  dest += mystrlen(dest);
  mystrncpy(dest,source,mystrlen(source));
  return temp;
}

//mystrncat
char * mystrncat( char *dest, char *source,int n){
  char * temp = dest;
  dest += mystrlen(dest);
  mystrncpy(dest,source,n);
  return temp;
}

//strcmp [ int mystrcmp( char *s1, char *s2 ) ]
//    Your version does not need to return the same exact value as the system version, as long as it returns -, + or 0 when it should.
int mystrcmp( char *s1, char *s2 ){
  while(*s1 == *s2 && *s1 && *s2){
    s1++;
    s2++;
  }
  return *s1-*s2;
}

//strchr [ char * mystrchr( char *s, char c ) ]
char * mystrchr( char *s, char c ){
  int len = mystrlen(s);

  while ((*s != c) && (len!= -1)){
    s++;
    len--;
  }
  if (len == -1) return NULL;
  else return s;
}

//mystrstr
char * mystrstr( char *s1, char * s2 ){
}

