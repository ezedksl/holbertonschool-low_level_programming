#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
  int x;
while (x != 98)
{
      if (n > 98)
	{
	  printf ("%d, ", n);
	  n--;
	    }
      else if (n < 98)
	{
	  printf ("%d, ", n);
	  n++;
	    }
  else 
{
  printf ("%d\n", n);
  x = n;
}
}
}
