/*
http://projecteuler.net/problem=10

Summation of primes

Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 
Find the sum of all the primes below two million.
*/

#include "euler.h"
#include <stdio.h>

//const long long limit = 10;
const long long limit = 2000000;


int main()
{
	int i = 2;
	long sum = 0;

	while ( i <= limit ) {
		if (is_prime(i))
			sum=sum+i;
		i++; 
	}

	printf("%ld%s\n", sum, " is the sum of all primes numbers below our limit");
	return 0;
}
