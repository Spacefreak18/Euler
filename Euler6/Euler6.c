/*
http://projecteuler.net/problem=6

Sum square difference

Problem 6

The sum of the squares of the first ten natural numbers is,
 
1^2 + 2^2 + ... + 10^2 = 385
 
The square of the sum of the first ten natural numbers is,
 
(1 + 2 + ... + 10)^2 = 55^2 = 3025
 
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385 = 2640.
 
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

const int numbers = 100;

int main () {

	int i = 1;
	int sum_squares=0;
	int square_sum=0;
	
	// square sum
	while ( i <= numbers ) {
		square_sum = i + square_sum;
		i++;
	}
	
	square_sum = square_sum*square_sum;

	// sum squares
	i = 1;
	while ( i <= numbers ) {
		sum_squares = sum_squares + (i*i);
		i++;
	}
	
	printf("%d \n",square_sum-sum_squares);

	return 0;
}
