#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *str) {
  int i = 0;
  while (*str) {
    i++;
    str++;
  }
  return i;
}

char * ncpy( char *dest, char *source, int n) {
  char *beginning = dest;
  while (n && *source) {
    *dest = *source;
    source++;
    dest++;
    n--;
  }
  return beginning;
}

char * cat( char *dest, char *source ) {
  char *beginning = dest;
  dest += len(dest);
  ncpy(dest, source, len(source));
  return beginning;
}

int cmp( char *s1, char *s2 ) {
  while (*s1 || *s2) {
    if (*s1 < *s2) {
      return -1;
    }
    if (*s1 > *s2) {
      return 1;
    }
    s1++; s2++;
  }
  return 0;
}

char * chr( char *s, char c ) {
  while (*s != c) {
    if ( !*s ) return NULL;
    s++;
  }
  return s;
}

int main() {
  printf("Length of string 'sarah': %d \n", len("sarah"));
  char str1[256] = "Sarah\0";
  char str2[] = "Stephanie\0";
  printf("ncpy(\"Sarah\", \"Stephanie\", 3): %s\n",  ncpy(str1, str2, 3));
  printf("%s\n",str1);
  printf("%s\n",str2);
  printf("cat(\"Steah\", \"Stephanie\"): %s\n", cat(str1,str2));
  char str3[7] = "cat";
  char str4[] = "catdog";
  printf("cmp(\"cat\", \"catdog\"): %d\n", cmp(str3,str4));
  cat(str3, "dog");
  printf("cmp(\"catdog\", \"catdog\"): %d\n", cmp(str3,str4));
  ncpy(str3, "catl", 4);
  printf("cmp(\"catlmog\", \"catdog\"): %d\n", cmp(str3,str4));
  printf("chr(\"catdog\",\'l\'): %s\n", chr(str4, 'l'));
  printf("chr(\"catdog\",\'d\'): %s\n", chr(str4, 'd'));
}
