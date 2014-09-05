/*
http://projecteuler.net/problem=4

Largest palindrome product

Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
 
Find the largest palindrome made from the product of two 3-digit numbers.
*/


#include "euler.h"
#include <stdio.h>

const int limit = 998001; // product of 999*999
//const int limit = 9801; // product of 99*99

int main() {

	int ceiling;
	//int a;
	bool b;
	int c;
	bool success = false;
	
	int divisor = 1000;
	int quotient;

	while (success==false) {
		
		ceiling = limit;
		divisor--;
		
		while (ceiling>700000 && success==false) {
			
			b = is_palindrome(ceiling);
			
			if (b==true) {

				if ( (ceiling%divisor)==0 ) {

					quotient=ceiling/divisor;
					c = get_digits(quotient);
					
					if ( c>2 ) {
						success=true;
					}
				}
				
			}
				
			ceiling--;

		}
		
	}
	
	printf("%d \n",ceiling+1);
	
	return 0;
}
