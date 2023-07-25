#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int rollDice(void);
enum status { WON, LOSS, CONTINUE};
main()
{
	srand(time(NULL));
	
	int myPoints;
	enum status gameStatus;
	int sum;
	char click = getche();

	
	if(click == 13)
	{
       sum = rollDice();
	switch(sum)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		
		case 2:
		case 3:
		case 12:
			gameStatus = LOSS;
			break;
		
		default:
			myPoints = sum;
			gameStatus = CONTINUE;
			printf("\nPoints = %d", myPoints);
			break;
	}//end if switch
    }//end if statement
	
	
	while(gameStatus == CONTINUE)
	{
		char choice = getche();
		if(choice == 13)
		{
    		sum = rollDice();
		
    		if(sum == 7)
     		gameStatus = LOSS;
    		else
    		{
			if(sum == myPoints)
			gameStatus = WON;
    		}
        }//end of inner if
	}//end of while
	
	if(gameStatus == WON)
	printf("\nYOU WIN");
	else
	printf("\nYOU LOST");
}

int rollDice(void)
{
	int roll1 = 1 + (rand() % 6);
	int roll2 = 1 + (rand() % 6);
	
	printf("\n%d + %d = %d", roll1, roll2, roll1 + roll2);
	return roll1 + roll2;
}
