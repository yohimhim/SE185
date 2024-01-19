/*----------------------------------------------------------------------------
-		         SE 185: Lab 05 - Conditionals (What's up?)	    	         -
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
// Compile with gcc lab05.c -o lab05
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -a -g -b | ./lab05

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
double magnitude(double x, double y, double z);
int close_to(double tolerance, double point, double value);
int top_or(double x, double y, double z);
int bottom_or(double x, double y, double z);
int left_or(double x, double y, double z);
int right_or(double x, double y, double z);
int front_or(double x, double y, double z);
int back_or(double x, double y, double z);

int main(int argc, char *argv[])
{
    int triangle, circle, x_button, square;
    double ax, ay, az, gx, gy, gz;

    while (1)
    {
        scanf("%lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d",
              &ax, &ay, &az, &gx, &gy, &gz, &triangle, &circle, &x_button, &square);

        /* printf for observing values scanned in from ds4rd.exe,
         * be sure to comment or remove in final program */
   //     printf("Echoing output: %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n",
   //            ax, ay, az, gx, gy, gz, triangle, circle, x_button, square);

        /* It would be wise (mainly save time) if you copy your code to calculate
         * the magnitude from lab03-1.c. You will also need to copy your
         * prototypes and functions to the appropriate sections in this program. */

   //     printf("The acceleration's current magnitude is: %lf\n", magnitude(ax, ay, az));
		
		if (triangle == 1)
		{
			break;
		}
		
		if (magnitude(ax, ay, az) > 0.8) 
		{
			if(top_or(gx, gy, gz) == 1) 
			{
				printf("TOP\n");
				
			}
			else if(bottom_or(gx, gy, gz) == 1)
			{
				printf("BOT\n");
				
			}
			else if(left_or(gx, gy, gz) == 1)
			{
				printf("LEFT\n");
				
			}
			else if(right_or(gx, gy, gz) == 1)
			{
				printf("RIGHT\n");
				
			}
			else if(front_or(gx, gy, gz) == 1)
			{
				printf("FRONT\n");
				
			}
			else if(back_or(gx, gy, gz) == 1)
			{
				printf("BACK\n");
				
			}
			
		}
		else 
		{
			
		}
		
		
		
    }

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */

double magnitude(double x, double y, double z)
{
    return sqrt(pow(x , 2) + pow(y , 2) + pow(z , 2));
}

int close_to(double tolerance, double point, double value)
{
	if((value) <= (point + tolerance) && (value) >= (point - tolerance))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int top_or(double x, double y, double z)
{
	int top_check = 0;
	if (close_to(0.25, 0, x) && close_to(0.25, 1, y) && close_to(0.25, 0, z))
	{
		top_check = 1;
	}
	
	return top_check;
}

int bottom_or(double x, double y, double z)
{
	int bot_check = 0;
	if (close_to(0.25, 0, x) && close_to(0.25, -1, y) && close_to(0.25, 0, z))
	{
		bot_check = 1;
	}
	
	return bot_check;
}

int left_or(double x, double y, double z)
{
	int left_check = 0;
	if (close_to(0.25, 1, x) && close_to(0.25, 0, y) && close_to(0.25, 0, z))
	{
		left_check = 1;
	}
	
	return left_check;
}

int right_or(double x, double y, double z)
{
	int right_check = 0;
	if (close_to(0.25, -1, x) && close_to(0.25, 0, y) && close_to(0.25, 0, z))
	{
		right_check = 1;
	}
	
	return right_check;
}

int front_or(double x, double y, double z)
{
	int front_check = 0;
	if (close_to(0.25, 0, x) && close_to(0.25, 0, y) && close_to(0.25, -1, z))
	{
		front_check = 1;
	}
	
	return front_check;
}

int back_or(double x, double y, double z)
{
	int back_check = 0;
	if (close_to(0.25, 0, x) && close_to(0.25, 0, y) && close_to(0.25, 1, z))
	{
		back_check = 1;
	}
	
	return back_check;
}

