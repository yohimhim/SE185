/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:	Marcus Yeung																	 -
- 	Section:15																 -
-	NetID:	yohimhim																     -
-	Date:	9/10/2023																 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>   // Google this header file to learn more! :)

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    double a, b, c;
    double filler;

    /* Put your code after this line */
	printf("Enter a value for a: ");
	scanf("%lf", &a);
	printf("Enter a value for b: "); 
	scanf("%lf", &b); 
	printf("A: %.2lf \nB: %.2lf\n" , a , b);
	
	c = pow(b , 2) + pow(a , 2);
	printf("C = %.2lf" ,c);

    /* This next line will calculate the square root of whatever value is
     * inside the parenthesis and assigns it to the variable filler. */
    filler = sqrt();

    return 0;
}
