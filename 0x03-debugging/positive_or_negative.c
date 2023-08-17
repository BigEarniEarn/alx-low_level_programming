#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * positive_or_negative - Determines if pos, neg or 0
 * @i: The integar value being computed
 * Return:void
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
