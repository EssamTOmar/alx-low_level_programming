#include "main.h"
/**
 * reset_to_98 - assingning a value of 98 to variable
 * @*n: the address of variable that we will assign to
 *
 * return - the value of n
 */
void reset_to_98(int *n)
{
	int c = 1;
	int p = &c;

	reset_to_98(*p);
}
