#include "main.h"

/**
  * swap_int- Swap value of two integrer
  * swap_int: Swap value of int a and int b
  * @a: Pointer and first int to swap
  * @b: Pointer and second int to swap
  **/

void swap_int(int *a, int *b)

{
	int temporaire = 0;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
