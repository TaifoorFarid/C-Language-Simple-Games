#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{

	int count=0;
	int turn1,turn2,turn3,turn4,turn5,turn6,turn7,turn8,turn9,turn10,turn11,turn12,turn13,turn14,turn15,turn16,turn17,turn18,turn19,turn20,turn21;
	char plyr1Name[20];
	char plyr2Name[20];
    printf("\t*Rules*\n");
    printf("1. You ca choose any number from 1-3.\n");
    printf("2. The player who first reaches 21 will lose.\n\n");
    printf("Enter player 1 name: ");
    scanf("%s", &plyr1Name);
    printf("Enter player 2 name: ");
    scanf("%s", &plyr2Name);
    //1 turn	
    printf("\n%s:\n", plyr1Name);
    scanf("%d",&turn1);
    if(turn1>3)
    	printf("Wrong choice!\n\n");
	if(turn1<4)
	{
        count=turn1;
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //2 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn2);
    if(turn2>=4)
    	printf("Wrong choice!\n\n");
	if(turn2<4)
	{         
        count=count+turn2;
        printf("\n\t*COUNT=%d*\n\n",count);
    }            
    //3 turn 
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn3);
    if(turn3>=4)
    	printf("Wrong choice!\n\n");
	if(turn3<4)
	{
        count=count+turn3;
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //4 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn4);
    if(turn4>=4)
    	printf("Wrong choice!\n\n");
	if(turn4<4)
	{
        count=count+turn4;
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //5 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn5);
    if(turn5>=4)
    	printf("Wrong choice!\n\n");
	if(turn5<4)
	{
        count=count+turn5;
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //6 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn6);
    if(turn6>=4)
    	printf("Wrong choice!\n\n");
	if(turn6<4)
	{
        count=count+turn6;
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //7 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn7);
    if(turn7>=4)
    	printf("Wrong choice!\n\n");
	if(turn7<4)
	{
        count=count+turn7;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name); 
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //8 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn8);
    if(turn8>=4)
    	printf("Wrong choice!\n\n");
	if(turn8<4)
	{
        count=count+turn8;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //9 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn9);
    if(turn9>=4)
    	printf("Wrong choice!\n\n");
	if(turn9<4)
	{
        count=count+turn9;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //10 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn10);
    if(turn10>=4)
    	printf("Wrong choice!\n\n");
	if(turn10<4)
	{
        count=count+turn10;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //11 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn11);
    if(turn11>=4)
    	printf("Wrong choice!\n\n");
	if(turn11<4)
	{
        count=count+turn11;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //12 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn12);
    if(turn12>=4)
    	printf("Wrong choice!\n\n");
	if(turn12<4)
	{
        count=count+turn12;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //13 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn13);
    if(turn13>=4)
    	printf("Wrong choice!\n\n");
	if(turn13<4)
	{
        count=count+turn13;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //14 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn14);
    if(turn14>=4)
    	printf("Wrong choice!\n\n");
	if(turn14<4)
	{
        count=count+turn14;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //15 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn15);
    if(turn15>=4)
    	printf("Wrong choice!\n\n");
	if(turn15<4)
	{
        count=count+turn15;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //16 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn16);
    if(turn16>=4)
    	printf("Wrong choice!\n\n");
	if(turn16<4)
	{
        count=count+turn16;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //17 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn17);
    if(turn17>=4)
    	printf("Wrong choice!\n\n");
	if(turn17<4)
	{
        count=count+turn17;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //18 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn18);
    if(turn18>=4)
    	printf("Wrong choice!\n\n");
	if(turn18<4)
	{
        count=count+turn18;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //19 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn19);
    if(turn19>=4)
    	printf("Wrong choice!\n\n");
	if(turn19<4)
	{
        count=count+turn19;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //20 turn
    printf("\n%s:\n", plyr2Name);
    scanf("%d",&turn20);
    if(turn20>=4)
    	printf("Wrong choice!\n\n");
	if(turn20<4)
	{
        count=count+turn20;
        if(count>20)
        {
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr2Name);
        exit(0);
        }
        else
        printf("\n\t*COUNT=%d*\n\n",count);
    }
    //21 turn
    printf("%s:\n", plyr1Name);
    scanf("%d",&turn21);
    if(turn21>=4)
    	printf("Wrong choice!\n\n");
	if(turn21<4)
	{
        count=count+turn21;
        printf("\n\t*COUNT=%d*\n",count);
        printf("\n\n\t%s LOSE!\n", plyr1Name);
    }
    getch();
}
