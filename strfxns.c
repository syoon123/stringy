#include <stdio.h>
#include <stdlib.h>

int len(char *str) {
  int i = 0;
  while (*str) {
    i++;
    str++;
  }
  return i;
}
/*
char * ncpy( char *dest, char *src ) {
  return 'a';
}

char * cat( char *dest, char *src ) {
  return 'a';
}

int cmp( char *s1, char *s2 ) {
  return 0;
}

char * chr( char *s, char c ) {
   return 'a';
}
*/
int main() {
  printf("Length of string 'sarah': %d \n", len("sarah"));
}
