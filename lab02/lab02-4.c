#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 6427 + 1725;
	int b = (6971 * 3925) - 95;
	double c = 79 + (12 / 5);
/*
Output: 81.00  
(12/5) does integer division instead of the 
the expected double division. This results
in (12/5) being "2", not "2.4"
*/
	double d  = 3640.0 / 107.9;
	int e = (22 / 3) * 3;
/*
Output: 21
This formula is going to have integer division,
therefore (22/3) would result in 7. Then 
7 * 3 would be 21. Instead of the arithmetic 
answer: 22.
*/
	int f = 22 / (3 * 3);
/*
Since this formula is type integer, 22/9
would result in 2, since it does not care
about the decimals.
*/
	double g = 22 / (3 * 3);
/*
This code is involving integer divison and 
assigning it to a souble variable. 22/9
would perform interger divison causing the 
answer to be 2.00 .
*/
	double h = 22 / 3* 3;
/*
This code compiles to the output of 21.00,
because of the integer division (22/3 = 7)
the answer would be 21.00;
*/
	double i = (22.0 / 3) * 3.0;
	int j = 22.0 / (3 * 3.0);
/*
The answer of this formula would be 2.44, but 
since we declared the code a type int, the 2.44
will become "2".
*/
	double k = 22.0 / 3.0 * 3.0;
	double l = ((pow(23.567, 2))/(4 * M_PI));
/*

*/
	
	double m = (14 * 0.3048);
/*

*/

	double n = ((76 - 32) / 1.8);
	
	printf("\na = %d", a); 

	printf("\nb = %d", b);
	printf("\nc = %.2lf", c);
	printf("\nd = %.2lf", d);
	printf("\ne = %d", e);
	printf("\nf = %d", f);
	printf("\ng = %.2lf", g);
	printf("\nh = %.2lf", h);
	printf("\ni = %.2lf", i);
	printf("\nj = %d", j);
	printf("\nk = %.2lf", k);
	printf("\nl = Area of circle = %.2lf", l);
	printf("\nm = 14 feet = %.2lf meters", m);
	printf("\nn = 76 degrees Fahrenheit = %.2lf degrees Celsius", n);
	
	
	return 0;
}