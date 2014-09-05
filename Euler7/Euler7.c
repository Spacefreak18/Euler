/*
http://projecteuler.net/problem=7

10001st prime

Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 
What is the 10001st prime number?

*/

#include <stdio.h>
#include "euler.h"

int main()
{
	int count = 0;
	int i = 7;
	count = 4;

	while ( count < 10001 ) {
		i=i+2;
		if (is_prime(i))
			count++;		
	}

	printf("%d %s \n",i," is the 10001st prime number.");

	return 0;
}
