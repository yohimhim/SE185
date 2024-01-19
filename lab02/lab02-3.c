/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int integer_result;
    double decimal_result;

    integer_result = 77 / 5;
    printf("The value of 77/5 is %d, using integer math.\n", integer_result);
/*
This is incorrect becuase %lf reads into a double, not 
integer_result which is an int type. This results in 
the code printing 0.000.
*/
	
    integer_result = 2 + 3;
    printf("The value of 2+3 is %d.\n", integer_result);
/*
The problem with this code is that after you write 
the %d between the quotations, you would need something 
the %d pulls data from.
*/

    decimal_result = 1.0 / 22.0;
    printf("The value 1.0/22.0 is %lf.\n", decimal_result);
/*
This code is wrong because the format specifier is for 
integers, not doubles. In this case, you would need a &lf
format specifier. 
*/




    return 0;
}
