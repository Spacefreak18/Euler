/*
http://projecteuler.net/problem=5

Smallest multiple

Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdbool.h>
#include <stdio.h>

const int  b = 20;

// this is a rather simple implementation of a brute force technique
// it takes .17 seconds to run

int main() {

	int i = 1;
	int sum = 0;
	
	bool minor_success=true;
	bool major_success=false;

	while (major_success==false) {
	
		sum=sum+b;
	
		while (i<b && minor_success==true) {
	
			if ( sum%i==0 ) {
				minor_success=true;
			} else {
				minor_success=false;
			}
			
			i=i+1;
		}
		
		if ( minor_success==false ) {
			// do a reset
			minor_success=true;
			i=1;
		} else {
			major_success=true;
		}
		
	}
	
	printf("%d \n",sum);

	return 0;
}
