/*
http://projecteuler.net/problem=9

Special Pythagorean triplet

Problem 9

A Pythagorean triplet is a set of three natural numbers, a<b<c, for which,
 
a^2 + b^2 = c^2
 
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.
 
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc
*/

#include "euler.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>


int main () {
	
	// starting points
	int b=12;
	int div;
	int c=13;
	int a = 5;
	bool success = false;
	
	while (1000%(a+b+c)!=0) {
		if (success==true) {
			success=false;
		}
		
		a++;
		b=a+1;

		while ( (b<(a*a)) && (success==false) ) {
			if ( is_perfect((a*a)+(b*b)) ) {
				success=true;
				c=sqrt((double) ((a*a)+(b*b)));
			}	else {
				success=false;
				b++;
			}
		}
			
	}
	
	div=1000/(a+b+c);
	
	a=a*div;
	b=b*div;
	c=c*div;
	
	//printf("%s %d \n","A is ",b);
	//printf("%s %d \n","B is ",b);
	//printf("%s %d \n","C is ",c);
	printf("%s %d \n","Thier product is ",a*b*c);

	return 0;
}
