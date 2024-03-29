	/*----------------------------------------------------------------------------
-		    SE 185: Lab 03 - Introduction to the DS4 and Functions	    	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with 
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -b | ./lab03-2

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int total(int t, int c, int x, int s);

int main(int argc, char *argv[])
{

	int t;
	int c;
	int x;
	int s;

    while (1)
    {
		
		scanf("%d, %d, %d, %d", &t, &c, &x, &s);
		printf("Buttons: %d,%d,%d,%d\n",t ,c ,x ,s);
		printf("Total: %d\n", total(t, c, x, s));
		
    }

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */
int total(int t, int c, int x, int s)
{
	
	return t + c + x + s;
}