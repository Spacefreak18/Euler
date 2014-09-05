// Euler mathematics class
#include <stdbool.h>
#include <math.h>
	
	bool is_multiple(int m_dividend, int m_divisor) {
		int quotient;
		quotient = m_dividend % m_divisor;
		
		if ( quotient > 0 ) {
			return false;
		} else {
			return true;
		}
	}
	
	int get_digits(int m_product) {
	
		int digits = 0;
	
		while (m_product>0) {
			m_product=m_product/10;
			digits++;
		}

		return digits;
	}     
	
	bool is_palindrome(int m_product) {
		float product;
		int i = 0;
		int digits = get_digits(m_product);
		int a [digits];
		bool success=true;

		while (i<digits) {
			product = (float)m_product;
			m_product=m_product/10;
			product=product/10;
			
			a[i]= ((product-m_product)*10)+.5;

			i++;		
		}
		
		i=0;
		while (success==true && i<(digits/2)) {
			if (a[digits-(digits-i)]==a[((digits-1)-i)]) {
				success=true;
			} else {
				success=false;
			}
			i++;
		}
		
		return success;
	}
	
	bool is_int(float m_number) {
		int b = (int) m_number;
		
		if (m_number - b > 0) {
			return false;
		} else {
			return true;
		}
	}
		
	bool is_perfect(int m_square) {
	
		float root;
		int root_int;
		float diff;
		
		root=sqrt((float) m_square);
		root_int = (int) root+.5;
		
		diff = root-root_int;
		
		if (diff>0) {
			return false;
		} else {
			return true;
		}
		
	}

	bool is_prime(int m_num) {
		int i;

		if (m_num == 2)
			return true;

		for (i=2;i<sqrt(m_num)+1;i++) {

			if (m_num%i==0)
				return false;
		}

		return true;
	}	
