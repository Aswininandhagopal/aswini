#include<stdio.h>
#include<string.h>
int toString(char []);
 
int main()
{
  char s[100];
  int n;
 
  printf("Input a valid string to convert to integer\n");
  scanf("%s", s);
 
  n = toString(s);
 
  printf("String  = %s\nInteger = %d\n", s, n);
 
  return 0;
}
 
int toString(char s[]) {
  int c, sign, offset, n;
 
  if (s[0] == '-') {  // Handle negative integers
    sign = -1;
  }
 
  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }
 
  n = 0;
 
  for (c = offset; s[c] != '\0'; c++) {
    n = n * 10 + s[c] - '0';
  }
 
  if (sign == -1) {
    n = -n;
  }
 
  return n;
}
