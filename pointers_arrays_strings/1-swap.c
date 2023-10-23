#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
/* save the initial value of *a */
int saved = *a;
*a = *b;
/* set initial value reserved in 'saved' to b* */
*b = saved;
}
