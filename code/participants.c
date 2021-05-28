/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;
  printf ("%02d: Samuel A. Rebelsky\n", ++i);
  printf ("%02d: Nicolas Knoebber\n", ++i);
  printf ("%02d: Samee Zahid\n", ++i);
  printf ("%02d: Alex Mitchell\n", ++i);
  printf ("%02d: Toby Baratta\n", ++i);
  printf ("%02d: Shaun S. Mataire\n", ++i);
  printf ("%02d: Khoa Nguyen\n", ++i);
  printf ("%02d: Zoe Wolter\n", ++i); 
  printf ("%02d: Madeleine Hardt\n", ++i);
  printf ("%02d: Halley Freger\n" , ++i);
  printf ("%02d: Abby Stevens\n", ++i);
  printf ("%02d: Noah Schlager\n", ++i);
  printf ("%02d: Ezra Edgerton\n", ++i);
  printf ("%02d: Lavisha Bhambri\n", ++i);
  printf ("%02d: Eve Lyons-Berg\n", ++i);
  printf ("There are %i participants.\n", i);
  return 0;
} // main
