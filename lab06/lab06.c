/*----------------------------------------------------------------------------
-		                    SE 185: Lab 06 - Bop-It!	    	             -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
-	                            Notes                                        -
-----------------------------------------------------------------------------*/
// Compile with gcc lab06.c -o lab06
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -t -b | ./lab06

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int btnPressed(int t, int c, int x, int s);

int main(int argc, char *argv[])
{
    srand(time(NULL)); /* This will ensure a random game each time. */
	int time, triangle, circle, x_button, square;
	int numCorrect = 0;
	int dead = 0;

	printf("--Push any button to start--\n");
	while(1){
		scanf(" %d , %d, %d, %d, %d" , &time, &triangle, &circle, &x_button, &square);
		if (btnPressed(triangle, circle, x_button, square) == 1){
			
			int timeToDo = 5000;
			while (1){
				scanf(" %d , %d, %d, %d, %d, %d, %d, %d, %d" , &time, &triangle, &circle, &x_button, &square);
				if (triangle + square + circle + x_button == 0){
					int prevtime = time;
					int maxTime = prevtime + timeToDo;
					int randButton = (rand()%4) + 1;
					if (randButton == 1){
						printf("Triangle\n");
					}else if (randButton == 2){
						printf("Circle\n");
					}else if (randButton == 3){
						printf("Square\n");
					}else{
						printf("X\n");
					}
					printf("You have %d miliseconds to answer\n" , timeToDo);
					while(time < maxTime){
						scanf(" %d , %d, %d, %d, %d" , &time, &triangle, &circle, &x_button, &square);
						if (randButton == 1){
							if (triangle == 1){
								numCorrect++;
								dead = 1;
								timeToDo -= 100;
								break;
							}else if (square == 1 || circle == 1 || x_button == 1){
								printf("--GAME OVER--\n");
								dead = 3;
								break;
							}
						}else if (randButton == 2){
							if (circle == 1){
								numCorrect++;
								dead = 1;
								timeToDo -= 100;
								break;
							}else if (square == 1 || triangle == 1 || x_button == 1){
								printf("--GAME OVER--\n");
								dead = 3;
								break;
							}
						}else if (randButton == 3){
							if (square == 1){
								numCorrect++;
								dead = 1;
								timeToDo -= 100;
								break;
							}else if (triangle == 1 || circle == 1 || x_button == 1){
								printf("--GAME OVER--\n");
								dead = 3;
								break;
							}
						}else{
							if (x_button == 1){
								numCorrect++;
								dead = 1;
								timeToDo -= 100;
								break;
							}else if (square == 1 || circle == 1 || triangle == 1){
								printf("--GAME OVER--\n");
								dead = 3;
								break;
							}
					}
					}
				if (dead == 0){
					printf("You ran out of time :(\n");
					printf("You got %d correct\n" , numCorrect);
					dead = 2;
					break;
				}else if (dead == 3){
					printf("You got %d correct\n" , numCorrect);
					dead = 2;
					break;
				}else{
					dead = 0;
				}
					
			}
		}
	
	if (dead == 2){
		break;
	}
	}
	}
    return 0;
}


/* Put your functions here, and be sure to put prototypes above. */
int btnPressed(int t, int c, int x, int s)
{
	if(t == 1 || c == 1 || x == 1 || s == 1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}