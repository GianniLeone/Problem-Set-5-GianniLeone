#include <stdio.h>
 
int main()
{
  char s[1000];
  int c = 0;
 
  printf("Input a string\n");
  gets(s);
 
  while (s[c] != '\0')
    c++;
 
  printf("Length of the string: %d\n", c);
 
  return 0;
}

//Project Name: Problem Set 4.2
//Submitted by: Gianni Leone
//For Course: Audio Programing In C
//Due Date: 10/4/19
//Files included: N/A
//Purpose: Practice
//Build and Run commands
//Caveats, if any
//Acknowledgement, if any