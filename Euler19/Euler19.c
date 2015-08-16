/*
https://projecteuler.net/problem=19

You are given the following information, but you may prefer to do some research for yourself.

    1 Jan 1900 was a Monday.
    Thirty days has September,
    April, June and November.
    All the rest have thirty-one,
    Saving February alone,
    Which has twenty-eight, rain or shine.
    And on leap years, twenty-nine.
    A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/

#include <stdio.h>

const int StartYear = 1901; 
const int EndYear = 2001;

int getDays(int month, int year)
{
	if (month == 2) 
	{
		if (year % 4 == 0) {
			return 29;
		} else {
			return 28;
		}
	} else if (month == 4 || month == 6 || month == 9 || month == 11 ) 
	{
		return 30;
	} else {
		return 31;
	}
	return 31;
}

int main()
{
	int Sundays = 0;
	int DayOfWeek = 1;
	int Year = StartYear;
	int Days = 0;
	int ExtraDays = 0;

	DayOfWeek = 3; // Tuesday
	while ( Year < EndYear )
	{
		for ( int i = 1; i <= 12; i++)
		{
			if ( DayOfWeek == 1 )
				Sundays++;

			Days = getDays(i, Year);
			ExtraDays = Days % 7;
		
			DayOfWeek = DayOfWeek + ExtraDays;
			if ( DayOfWeek > 7)
				DayOfWeek = DayOfWeek - 7;	
							
		}
		Year++;		
	}

	printf("%d \n",Sundays);

	return 0;
}
