/*
http://projecteuler.net/problem=14

Longest Collatz sequence

Problem 14

The following iterative sequence is defined for the set of positive integers:
 
n n/2 (n is even)
 n 3n + 1 (n is odd)
 
Using the rule above and starting with 13, we generate the following sequence:
 
13 40 20 10 5 16 8 4 2 1
 
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 
Which starting number, under one million, produces the longest chain?
 
NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <stdio.h>

const long upper_limit = 1000001;

int main() {

	long most_terms_int = 0;
	long num_terms = 0;
	long i = 1;
	
	// this is the secret to euler 14
	unsigned long num = i;
	int terms = 0;

	for ( i=2; i<upper_limit; i++ ) {
	
		num = i;
		terms = 1;
		
		while ( num > 1 ) {
		
			if ( num%2 == 0 ) {
				
				num /= 2;
		
			} else {
			
				num = 3*num + 1;
		
			}
			
			terms++;

		}
		
		if ( terms > num_terms ) {
			num_terms = terms;
			most_terms_int = i;
		}
		
	}
	
	printf("%s %ld \n","The integer with the most terms is ",most_terms_int);
	//printf("%s %ld %s \n","It has ",num_terms," terms.");
	
}
