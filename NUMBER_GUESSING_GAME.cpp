#include<stdio.h>
int main()
{//BY TAIFOOR FARID FA22-BSE-051.
	int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
	int line1[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	printf("NOTE: After guessing the number 4 time you\nwill tell the line number and 5th time the\nprogram will guess the number in your mind");
 printf("\n\n   **NUMBER GUESSING GAME**");
	printf("\n\tline1    line2");
	printf("\n\t%d        %d\n",line1[1],line1[9]);
	printf("\t%d        %d\n",line1[2],line1[10]);
	printf("\t%d        %d\n",line1[3],line1[11]);
	printf("\t%d        %d\n",line1[4],line1[12]);
	printf("\t%d        %d\n",line1[5],line1[13]);
	printf("\t%d        %d\n",line1[6],line1[14]);
	printf("\t%d        %d\n",line1[7],line1[15]);
	printf("\t%d        %d\n",line1[8],line1[16]);	
	printf("\nChose a anumber and write the line number in which your chosen number is:");
	scanf("%d",&ans1);
	if(ans1==1)
	{// ANS.1 (true).
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[16],line1[12]);
	printf("\t%d\t%d\n",line1[8],line1[4]);
	printf("\t%d\t%d\n",line1[15],line1[11]);
	printf("\t%d\t%d\n",line1[7],line1[3]);
	printf("\t%d\t%d\n",line1[14],line1[10]);
	printf("\t%d\t%d\n",line1[6],line1[2]);
	printf("\t%d\t%d\n",line1[13],line1[9]);
	printf("\t%d\t%d\n",line1[5],line1[1]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans2);
	if(ans2==1)
	{// ANS.2 (TRUE).
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[1],line1[3]);
	printf("\t%d\t%d\n",line1[5],line1[7]);
	printf("\t%d\t%d\n",line1[9],line1[11]);
	printf("\t%d\t%d\n",line1[13],line1[15]);
	printf("\t%d\t%d\n",line1[2],line1[4]);
	printf("\t%d\t%d\n",line1[6],line1[8]);
	printf("\t%d\t%d\n",line1[10],line1[12]);
	printf("\t%d\t%d\n",line1[14],line1[16]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans4);
	if(ans4==1)
	{//ANS.4 (TRUE)
		printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[4],line1[1]);
	printf("\t%d\t%d\n",line1[2],line1[3]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans8);
	if(ans8==1)
	printf("%d is the number in your mind",line1[6]);
	else if(ans8==2)
	printf("%d is the number in your mind",line1[5]);
	else
	printf("WRONG CHOICE!");
	}
	else if(ans4==2)
	{//ANS.4 (FALSE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans9);
	if(ans9==1)
	printf("%d is the number in your mind",line1[8]);
	else if(ans9==2)
	printf("%d is the number in your mind",line1[7]);
	else
	printf("WRONG CHOICE!");
	}
	else
	printf("WRONG CHOICE!");
	}
	else if(ans2==2)
	{// ANS.2 (FALSE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[5],line1[7]);
	printf("\t%d\t%d\n",line1[1],line1[3]);
	printf("\t%d\t%d\n",line1[13],line1[15]);
	printf("\t%d\t%d\n",line1[9],line1[11]);
	printf("\t%d\t%d\n",line1[6],line1[8]);
	printf("\t%d\t%d\n",line1[2],line1[4]);
	printf("\t%d\t%d\n",line1[14],line1[16]);
	printf("\t%d\t%d\n",line1[10],line1[12]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans5);
	if(ans5==1)
	{//ANS.5 (TRUE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans10);
	if(ans10==1)
	printf("%d is the number in your mind",line1[2]);
	else if(ans10==2)
	printf("%d is the number in your mind",line1[1]);
	else
	printf("WRONG CHOICE!");
	}
		else if(ans5==2)
		{//ANS.5 (FALSE)
	    printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans11);
	if(ans11==1)
	printf("%d is the number in your mind",line1[4]);
	else if(ans11==2)
	printf("%d is the number in your mind",line1[3]);
	else
	printf("WRONG CHOICE!");
		}	
			else
			printf("WRONG CHOICE!");
	}
	else
	printf("WRONG CHOICE!");
	}
	else if(ans1==2)
	{//ANS.1(false).
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[8],line1[4]);
	printf("\t%d\t%d\n",line1[16],line1[12]);
	printf("\t%d\t%d\n",line1[7],line1[3]);
	printf("\t%d\t%d\n",line1[15],line1[11]);
	printf("\t%d\t%d\n",line1[6],line1[2]);
	printf("\t%d\t%d\n",line1[14],line1[10]);
	printf("\t%d\t%d\n",line1[5],line1[1]);
	printf("\t%d\t%d\n",line1[13],line1[9]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans3);
	if(ans3==1)
	{// ANS.3 (TRUE).
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[9],line1[11]);
	printf("\t%d\t%d\n",line1[13],line1[15]);
	printf("\t%d\t%d\n",line1[1],line1[3]);
	printf("\t%d\t%d\n",line1[5],line1[7]);
	printf("\t%d\t%d\n",line1[10],line1[12]);
	printf("\t%d\t%d\n",line1[14],line1[16]);
	printf("\t%d\t%d\n",line1[2],line1[4]);
	printf("\t%d\t%d\n",line1[6],line1[8]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans6);
	if(ans6==1)
	{//ANS.6 (TRUE)
		printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans12);
	if(ans12==1)
	printf("%d is the number in your mind",line1[14]);
	else if(ans12==2)
	printf("%d is the number in your mind",line1[13]);
	else
	printf("WRONG CHOICE!");
	}
	else if(ans6==2)
	{//ANS.6 (FALSE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[12],line1[10]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans13);
	if(ans13==1)
	printf("%d is the number in your mind",line1[16]);
	else if(ans13==2)
	printf("%d is the number in your mind",line1[15]);
	else
	printf("WRONG CHOICE!");
	}
	else
	printf("WRONG CHOICE!");
	}
	else if(ans3==2)
	{// ANS.3 (FALSE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[13],line1[15]);
	printf("\t%d\t%d\n",line1[9],line1[11]);
	printf("\t%d\t%d\n",line1[5],line1[7]);
	printf("\t%d\t%d\n",line1[1],line1[3]);
	printf("\t%d\t%d\n",line1[14],line1[16]);
	printf("\t%d\t%d\n",line1[10],line1[12]);
	printf("\t%d\t%d\n",line1[6],line1[8]);
	printf("\t%d\t%d\n",line1[2],line1[4]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans7);
	if(ans7==1)
	{//ANS.7 (TRUE)
	printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans14);
	if(ans14==1)
	printf("%d is the number in your mind",line1[10]);
	else if(ans14==2)
	printf("%d is the number in your mind",line1[9]);
	else
	printf("WRONG CHOICE!");
	}
		else if(ans7==2)
		{//ANS.7 (FALSE)
	    printf("\n\tline1\tline2");
	printf("\n\t%d\t%d\n",line1[2],line1[1]);
	printf("\t%d\t%d\n",line1[4],line1[3]);
	printf("\t%d\t%d\n",line1[6],line1[5]);
	printf("\t%d\t%d\n",line1[8],line1[7]);
	printf("\t%d\t%d\n",line1[10],line1[9]);
	printf("\t%d\t%d\n",line1[12],line1[11]);
	printf("\t%d\t%d\n",line1[14],line1[13]);
	printf("\t%d\t%d\n",line1[16],line1[15]);
	printf("Your chossen number is in which line:");
	scanf("%d",&ans15);
	if(ans15==1)
	printf("%d is the number in your mind",line1[12]);
	else if(ans15==2)
	printf("%d is the number in your mind",line1[11]);
	else
	printf("WRONG CHOICE!");
	}	
	else
	printf("WRONG CHOICE!");
	}
	else
	printf("WRONG CHOICE!");
	}	
}