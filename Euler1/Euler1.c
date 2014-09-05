/*
http://projecteuler.net/problem=1

Multiples of 3 and 5

Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

const int limit = 1000;

int main()
{ 
	int sum = 0;
	int dividend = 1;
	int multiple_3;
	int multiple_5;

	// main loop

	while ( dividend < limit ) {
		multiple_5=dividend%5;
		multiple_3=dividend%3;

		if ( multiple_3==0 || multiple_5==0 )
			sum=sum+dividend;

		dividend++;

	}

	printf("%d \n",sum);

	return 0;
}
