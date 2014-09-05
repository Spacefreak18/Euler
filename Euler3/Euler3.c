/*
http://projecteuler.net/problem=3

Largest prime factor

Problem 3 

The prime factors of 13195 are 5, 7, 13 and 29.
 
What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

//int n = 13195;
long n=600851475143;

int main() {
		
	int i = 2;
	while (i*i < n) {
		if (n%i==0) {
			n=n/i;
		} else {
			i++;
		}
	}
				
	printf("%ld%s\n",n," is the greatest prime factor.");

	return 0;
	
}
