/*It is a binary search game that will guess
the number in your mind in possible minimun number of
tries*/
#include<stdio.h>
#include<conio.h>
float Greater(float s, float g);
float smaller(float s, float g);
void print(int game);
main()
{
	int game;
	printf("Enter Range of Game form 1-");
	scanf("%d", &game);
	int count = 0;
	float guess = game/2;
	float show = guess;
	print(game);
	
	if(getche() == 13)
	{
    	while(1)
    	{
    		count++;
    		printf("\n\n%d. Is %.0f your number.\n", count, show);
    		printf("\nPress 2 if YOUR NUM > SHOWN NUM");
    		printf("\nPress 1 if YOUR NUM < SHOWN NUM\n");
    		guess = guess/2;
    		char ch = getche();
		
    		if(ch == '2')
    		show = Greater(show, guess);
    		else if(ch == '1')
    		show = smaller(show, guess);
    		else if(ch == 13){
    			printf("\n\tHAVE A NICE DAY!");
    			break;
    		}
    		else
    		printf("Wrong choice!");
    	}//End of while
    }//End of if
}//End of main

float Greater(float s, float g)
{
	int num = g + 0.5;
	return (s + num);
}

float smaller(float s, float g)
{
	int num = g + 0.5;
	return (s - num);
}

void print(int game)
{
	printf("\t\tREMEMBER!");
	printf("\n\nGuess any number from 1 - %d.\n", game);
	printf("\n\nIf your guessed NUMBER is SMALLER/GREATER than the shown number than: ");
	printf("\nPress 2 if your Guessed number is greater than shown number.");
	printf("\nPress 1 if your Gussed number is smaller than shown number.");
	printf("\nPress ENTER if the given number is your number.");
	printf("\n\nPress Enter when you are ready.");
	
}
