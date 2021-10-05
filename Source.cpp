#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> //for srand() and rand()
#include <time.h> //for time()
int board[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };
#include "Header.h"

void main()
{
	//srand(time(NULL));//once 
	int counter = game();
		printf("X marks the spot well done!\n");
		if (counter < 4)
		{
			printf("\nYou took %d turns to locate the treasure, you make it look easy!", counter);
		}
		else if (counter > 3 && counter < 10)
		{
			printf("\nYou took %d turns to locate the treasure, not bad...", counter);
		}
		else
		{
			printf("\nYou took %d turns to locate the treasure, don't quit your day job to be a Pirate.", counter);
		}

}

/*{
	char product[5][20]; //added for up to 20 letters per entry
	float price[5], total, discount;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("\nPlease enter a product: ");
		scanf(" %[^\n]", &product[i]); //allow for spaces
		printf("\nand the price: \x9c");
		scanf("%f", &price[i]);
		while (price[i] < 0) //will trigger loop if price is a negative value
		{
			printf("\nEnter a real value: \x9c");
			scanf("%f", &price[i]); //asks again for user input
		}
	}

	total = 0;

	printf("\nThe products you entered are:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s \x9c%.2f\n", product[i], price[i]);
		total = total + price[i];
	}

	discount = total * 0.85;
	printf("\nTotal amount comes to: \x9c%.2f\n", total);
	printf("Total with staff discount comes to: \x9c %.2f", discount);*/
/*{
	int area;

	printf("Welcome to the carrot bed program, remember, your carrot bed needs to have 8cm x 8cm per carrot to grow.\n");
	printf("\nLet's start by working out the area of your carrot bed\n");

	area = calculateRec(); //runs header code (which contains everything pretty much!)*/
/*
	{
	char carMake[20];
	char carModel[20];
	int mileage;
	int doors;
	char choice;

	printf("\n\nWelcome, would you like to enter a cars details?: (y/n) "); //Need to ask input to get the While loop running
	scanf(" %c", &choice);
	while (choice == 'y')
	{
		printf("\nPlease enter the car manufacturer: ");
		scanf("%s", &carMake);

		printf("\nPlease enter the car model: ");
		scanf(" %[^\n]", &carModel); //to allow spaces entry i.e. 458 Italia

		mileage = 0; //to allow mileage to be reset each loop
		while (mileage <= 0)
		{
			printf("\nPlease enter the total mileage on the car (no comma's!): "); //
			scanf("%d", &mileage);
		}

		doors = 0; //to allow doors to be reset each loop
		while (doors < 2 || doors > 12) //Ensure at least a 2 door entry and no more than 12 which should cover a limousine
		{
			printf("\nPlease enter the number of doors on the car: ");
			scanf("%d", &doors);
		}

		printf("\n\nHere are the details of the car:\n");
		printf("Manufacturer: %s\n", carMake);
		printf("Model: %s\n", carModel);
		printf("Total mileage: %d\n", mileage);
		printf("Number of doors: %d\n", doors);

		printf("\n\nWould you like to enter another cars details?: (y/n) "); //Same question but worded better for repeated entries
		scanf(" %c", &choice);
	} 
		printf("\n\nThank you, goodbye!\n");
}*/