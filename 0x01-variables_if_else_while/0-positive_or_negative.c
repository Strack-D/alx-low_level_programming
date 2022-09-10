#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry point
 *
 * find if a number is negative or positive
 *
 * return: Always 0 (success) 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0){
		printf("%d is negative", n);
	}
	else if (n > 0){
		printf("%d is positive", n);
	}
	else{
		printf("%d is zero", n);
	}
	return (0);

}
