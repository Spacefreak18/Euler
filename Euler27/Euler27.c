/*
http://projecteuler.net/problem=27

Quadratic Primes

Problem 27

Euler discovered the remarkable quadratic formula:

n2+n+41

It turns out that the formula will produce 40 primes for the consecutive integer values 0≤n≤39
. However, when n=40,402+40+41=40(40+1)+41 is divisible by 41, and certainly when n=41,412+41+41

is clearly divisible by 41.

The incredible formula n2−79n+1601
was discovered, which produces 80 primes for the consecutive values 0≤n≤79

. The product of the coefficients, −79 and 1601, is −126479.

Considering quadratics of the form:

    n2+an+b

, where |a|<1000 and |b|≤1000

where |n|
is the modulus/absolute value of n
e.g. |11|=11 and |−4|=4

Find the product of the coefficients, a
and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n=0.
*/

#include "../lib/euler.h"
#include <stdio.h>
#include <stdlib.h>



#define foreach(item, array) for(int keep = 1, count = 0, size = sizeof (array) / sizeof *(array); keep && count != size; keep = !keep, count++) for(item = (array) + count; keep; keep = !keep)


int primes[] = {2,3,5,7,11,13,17,19,23,29, 
     31,37, 41,43,47,53,59,61,67,71, 
     73,79,83,89,97,101,103,107,109,113, 
    127,131,137,139,149,151,157,163,167,173, 
    179,181,191,193,197,199,211,223,227,229, 
    233,239,241,251,257,263,269,271,277,281, 
    283,293,307,311,313,317,331,337,347,349, 
    353,359,367,373,379,383,389,397,401,409, 
    419,421,431,433,439,443,449,457,461,463, 
    467,479,487,491,499,503,509,521,523,541, 
    547,557,563,569,571,577,587,593,599,601, 
    607,613,617,619,631,641,643,647,653,659, 
    661,673,677,683,691,701,709,719,727,733, 
    739,743,751,757,761,769,773,787,797,809, 
    811,821,823,827,829,839,853,857,859,863, 
    877,881,883,887,907,911,919,929,937,941, 
    947,953,967,971,977,983,991,997};

int main()
{
	long product = 0;
  int max_primes = 0;
  int best_a=0;
  int best_b=0;

  foreach(int *p1, primes) {
    int a = -1000;
	  while ( a < 1000 ) {
      bool do_continue = true;
      int n = 0;
      int current_primes = 0;
      while (do_continue == true) {
        long answer = (n*n)+(n*a)+(*p1);
		    if (is_prime(abs(answer))) {
			    current_primes++;
          do_continue = true;
          } else {
            do_continue = false;
          }
        n++;
      }
      if (current_primes > max_primes) {
        max_primes = current_primes;
        best_a=a;
        best_b=*p1;
      }
      
		  a+=1; 
	  }
  }

  product = best_a * best_b;
  printf("%d%s\n", best_a, " is the value of a");
  printf("%d%s\n", best_b, " is the value of b");
	printf("%d%s\n", max_primes, " are the iterations");
  printf("%ld%s\n", product, " is the product of a and b.");
	return 0;
}
