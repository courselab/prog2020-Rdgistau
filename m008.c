/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  char t[MAX];
  int i = 0, x = 0, a = 0;
  strcpy(t , s);
  while (t[i] != 0)
  {
    if (t[i] == ' ')
    {
      x = i;
    }
    i++;
  }
  a = x;
  i = 0;
  x = x + 1;
  while (t[x] != '\n')
  {
    s[i] = t[x];
    if (t[x] >= 97 && t[x] <= 122)
    {
      s[i] = (s[i] - 32);
    }
    x++;
    i++;
  }
  s[i] = ',';
  i++;
  s[i] = ' ';
  i++;
  x = 0;
  while (x != a)
  {
    s[i] = t[x];
    x++;
    i++;
  }
}  

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
