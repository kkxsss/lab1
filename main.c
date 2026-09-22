#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  char first[255], last[255];
  printf("Enter your first name: ");
  fgets(first, 255, stdin);
  first[strlen(first)-1] = '\0';
  printf("Enter your last name: ");
  gets(last);
  printf("Hello %s %s!\n", first, last, "\nit's my first lab!\n");
  return 0;
}