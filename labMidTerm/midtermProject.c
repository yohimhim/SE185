/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Student 1 - Role: Quiz Creator	and debugger - Participation: x%
(Use this line to describe your contribution to the project)
2- Student 2 - Role: Quiz Creator and debugger - Participation: y%
(Use this line to describe your contribution to the project)
3-
4-
5-																                                     
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               
-----------------------------------------------------------------------------*/
int quizOne();
int quizTwo();
int quizThree();

int main()
{
	int luckyNumber = 0;
	char yesOrNo[5];
	
	printf("Choose a lucky number between 1-9: ");
	scanf("%d", &luckyNumber);
	
	srand(luckyNumber * 123);
		
	int randSeed = (rand() % 3) + 1;
	int prevSeed;
	prevSeed = randSeed;
	while(1)
	{
		if(randSeed == 1)
		{	
			quizOne();
		}
		else if(randSeed == 2)
		{	
			quizTwo();
		}
		else if(randSeed == 3)
		{
			quizThree();
		}
		printf("\n\n-----------------------------------------------------------------------------");
		printf("\n\n\nDo you want to take another quiz?\n\n");
		printf("Type YES or NO: ");
		scanf("%s", yesOrNo);
		
		if((strcmp(yesOrNo, "YES") == 0) || (strcmp(yesOrNo, "yes") == 0))
		{
			randSeed = (rand() % 3) + 1;
			if(prevSeed == randSeed)
			{
				randSeed++;
			}
		}
		else
		{
			printf("bye bye");
			break;
		}
		
	}
	return 0;
	
	
}

/* Put your functions here, and be sure to put prototypes above. */

int quizOne() //first quiz
{
	int numCorrect = 0; //setting the numCorrect to 0 so it can vary from 0,5,10,15
	double totalCorrect = 0;
	int realCorrect = 0;
	double finalScore; 
	int trueOrFalse = 0; //true or false variable (either 1 or 2)
	char userLetter; //what ther user inputs for the multiple choice
	char userString[50]; //what the user inputs for the short answer section
	
	while(1) //while loop so that if the user gets a question wrong, they would have to do it over again
	{
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 1-\n\n\n");
	printf("This for loop iterates 5 times\n\n");
	printf(" for (int i = 0; i < 5; i = i + 2)\n");
	printf(" {\n");
	printf(" \tprintf(\"Hi\");\n");
	printf(" }\n\n");
	printf("|-------------------|\n");
	printf("| Enter 1 for true  |\n");
	printf("| Enter 2 for false |\n");
	printf("|-------------------|\n\n");
	printf("Answer: ");
	scanf("%d", &trueOrFalse);
	
	if(trueOrFalse == 1)
	{
		printf("\nWRONG");
	
	}
	else if(trueOrFalse == 2)
	{
		printf("\nCORRECT!");
		numCorrect += 5;
		realCorrect += 5;
	}
	else
	{
		printf("\nIncorrect! You did not enter 1 or 2!");
		
	}
	
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 2-\n\n\n");
	printf("Who is the father of C language?\n\n");
	printf(" a) Steve Jobs\n");
	printf(" b) James Gosling\n");
	printf(" c) Dennis Ritchie\n");
	printf(" d) Rasmus Lerdorf\n\n");
	printf("|---------------------|\n");
	printf("| Input a, b, c, or d |\n");
	printf("|---------------------|\n\n");
	printf("Answer: ");
	scanf("%s", &userLetter);
	
	if(userLetter == 'c' || userLetter == 'C')
	{
		printf("\nCORRECT!");
		numCorrect += 5;
		realCorrect += 5;
	}
	else 
	{
		printf("\nWRONG");
	}
	
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 3-\n\n\n");
	printf("What is the output of this function?\n\n");
	printf(" #include<stdio.h>\n");
	printf(" void main(){\n");
	printf(" \tprintf(\"SE185<3\");\n");
	printf(" }\n\n");
	printf("Output: ");
	scanf("%s", &userString);
	
	if(strcmp(userString, "SE185<3") == 0) //comparing the user inputted string to the answer
	{
		printf("\nCORRECT!");
		numCorrect += 5;
		realCorrect += 5;
	}
	else
	{
		printf("\nWRONG");
		
	}
	
	
	if(realCorrect != 15)
	{
		realCorrect = 0;
		finalScore = (100*numCorrect / totalCorrect); //formula to calculate the percentage you go on the quiz.
		printf("\n\n\nYour current score is %0.2lf%%!", finalScore);
		
		printf("\n\n\n\nYou got something wrong. try again!\n\n");
		
	}
	else
	{
		finalScore = (100*numCorrect / totalCorrect);
		printf("\n\n\nYour final score is %0.2lf%%!", finalScore);
		break;
		
	}
	}
	
}

int quizTwo()
{
	int numCorrect = 0;
	double totalCorrect = 0;
	int realCorrect = 0;
	double finalScore;
	int trueOrFalse = 0;
	char userLetter;
	char userString[50];
	
	while(1)
	{
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 1-\n\n\n");
	printf("This statement will print a random number from 11 to 53\n\n");
	printf(" printf(\"\\n%%d\", rand() %% 43 + 11);\n\n");
	printf("|-------------------|\n");
	printf("| Enter 1 for true  |\n");
	printf("| Enter 2 for false |\n");
	printf("|-------------------|\n\n");
	printf("Answer: ");
	scanf("%d", &trueOrFalse);

		if(trueOrFalse == 1)
		{
			printf("\nCORRECT");
			numCorrect += 5;
			realCorrect += 5;
		}
		else if(trueOrFalse == 2)
		{
			printf("\nWRONG");
		
		}
		else
		{
			printf("\nIncorrect! You did not enter 1 or 2!");
		}
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 2-\n\n\n");
	printf("Which is a valid C expression?\n\n");
	printf(" a) int my_num = 100,000;\n");
	printf(" b) int my_num = 100000;\n");
	printf(" c) int my num = 1000;\n");
	printf(" d) int $my_num = 10000;\n\n");
	printf("|---------------------|\n");
	printf("| Input a, b, c, or d |\n");
	printf("|---------------------|\n\n");
	printf("Answer: ");
	scanf("%s", &userLetter);
	
		if(userLetter == 'b' || userLetter == 'B')
		{
			printf("\nCORRECT!");
			numCorrect += 5;
			realCorrect += 5;
		}
		else 
		{
			printf("\nWRONG");
		}
	totalCorrect += 5;
	printf("\n\n\n");
	printf("-Question 3-\n\n\n");
	printf("What is the output of this function?\n\n");
	printf(" #include<stdio.h>\n");
	printf(" #include<math.h>\n");
	printf(" void main(){\n");
	printf(" \tint x, y, result;\n");
	printf(" \tx = 8;\n");
	printf(" \ty = 2;\n");
	printf(" \tresult = pow(x, y);\n");
	printf(" \tprintf(\"%%d\", result);\n");
	printf(" }\n\n");
	printf("Output: ");
	scanf("%s", &userString);
	
		if((strcmp(userString, "64") == 0))
		{
			printf("\nCORRECT!");
			numCorrect += 5;
			realCorrect += 5;
		}
		else
		{
			printf("\nWRONG");
		}
		
	if(realCorrect != 15)
	{
		realCorrect = 0;
		finalScore = (100*numCorrect / totalCorrect); //formula to calculate the percentage you go on the quiz.
		printf("\n\n\nYour current score is %0.2lf%%!", finalScore);
		
		printf("\n\n\n\nYou got something wrong. try again!\n\n");
		
	}
	else
	{
		finalScore = (100*numCorrect / totalCorrect);
		printf("\n\n\nYour final score is %0.2lf%%!", finalScore);
		break;
		
	}
	}
}

int quizThree()
{
	int numCorrect = 0;
	double totalCorrect = 0;
	int realCorrect = 0;
	double finalScore;
	int trueOrFalse = 0;
	char userLetter;
	char userString[50];
	while(1)
	{
		totalCorrect += 5;
		printf("\n\n\n");
		printf("-Question 1-\n\n\n");
		printf("The following statement is valid:\n\n");
		printf(" char usrVar[4] = {'A', 'B', '2', '4'};\n\n");
		printf("|-------------------|\n");
		printf("| Enter 1 for true  |\n");
		printf("| Enter 2 for false |\n");
		printf("|-------------------|\n\n");
		printf("Answer: ");
		scanf("%d", &trueOrFalse);
	
		if(trueOrFalse == 1)
		{
			printf("\nCORRECT");
			numCorrect += 5;
			realCorrect += 5;
		}
		else if(trueOrFalse == 2)
		{
			printf("\nWRONG");
		
		}
		else
		{
			printf("\nIncorrect! You did not enter 1 or 2!");
		}
		totalCorrect += 5;
		printf("\n\n\n");
		printf("-Question 2-\n\n\n");
		printf("scanf() is a predefined function in _____ header file.\n\n");
		printf(" a) stdio.h\n");
		printf(" b) stdlib.h\n");
		printf(" c) ctype.h\n");
		printf(" d) stdarg.h\n\n");
		printf("|---------------------|\n");
		printf("| Input a, b, c, or d |\n");
		printf("|---------------------|\n\n");
		printf("Answer: ");
		scanf("%s", &userLetter);
	
		if(userLetter == 'a' || userLetter == 'A')
		{
			printf("\nCORRECT!");
			numCorrect += 5;
			realCorrect += 5;
		}
		else 
		{
			printf("\nWRONG");
		}
		totalCorrect += 5;
		printf("\n\n\n");
		printf("-Question 3-\n\n\n");
		printf("Who is this cartoon character?\n\n");
		printf("   ,-~~-.___.\n");
		printf("  / |  '     \\\n");
		printf(" (  )         0\n");
		printf("  \\_/-, ,----'  \n");
		printf("     ====           //                     \n");
		printf("    /  \\-'~;    /~~~(O)\n");
		printf("   /  __/~|   /       |  \n");
		printf(" =(  _____| (_________|   \n\n");
		
		printf("Answer: ");
		scanf("%s", &userString);
	
		if((strcmp(userString, "snoopy") == 0) || (strcmp(userString, "Snoopy") == 0) || strcmp(userString, "SNOOPY") == 0)
		{
			printf("\nCORRECT!");
			numCorrect += 5;
			realCorrect += 5;
		}
		else
		{
			printf("\nWRONG");
		}
	if(realCorrect != 15)
	{
		realCorrect = 0;
		finalScore = (100*numCorrect / totalCorrect); //formula to calculate the percentage you go on the quiz.
		printf("\n\n\nYour current score is %0.2lf%%!", finalScore);
		
		printf("\n\n\n\nYou got something wrong. try again!\n\n");
		
	}
	else
	{
		finalScore = (100*numCorrect / totalCorrect);
		printf("\n\n\nYour final score is %0.2lf%%!", finalScore);
		break;
		
	}
	}
}

