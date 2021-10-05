#pragma once
int game()
{
	int guess;
	int counter = 1;

	printf("Welcome to the treasure hunt\n");
	printf("Choose your spot: (0-15): ");
	scanf("%d", &guess);
		while (guess < 0 || guess > 15)
		{
			printf("\nEnter a valid number: (0-15): ");
			scanf("%d", &guess);
		}
	
	while (board[guess] != 1)
		{
			counter++;
			printf("\nWrong, choose your spot: (0-15): ");
			scanf("%d", &guess);
			while (guess < 0 || guess > 15)
			{
				printf("\nEnter a valid number: (0-15): ");
				scanf("%d", &guess);
			}
		}
	
	return counter;
} 

/*	printf("Miss, go again.\n"); //for printing if randomized
			for (int i = 0; i < 16; i++)
			{
				printf("%d", board[i]);
			}*/


/*int calculateRec() //header code
{
	int length = 0;
	int width = 0;
	int lengthDiv, widthDiv, total, area;
	

	while (length <= 0) //wont take negative values
	{
		printf("\nEnter length of carrot bed in cm: ");
		scanf("%d", &length);
	}
	while (width <= 0) //wont take negative values
	{
		printf("\nEnter width of carrot bed in cm: ");
		scanf("%d", &width);
	}
	area = length * width; //calculates the area of the bed, for interest
	printf("\nThe area of the carrot bed is %d cm^2\n", area); 
	lengthDiv = length / 8; //finds how many carrots can grow lengthways
	widthDiv = width / 8; //finds how many carrots can grow widthways
	total = (lengthDiv * widthDiv); //finds the area of these two results
	if (total == 1) //output for singular carrot yield
	{
		printf("\nYou can grow a single carrot in this bed, make it bigger?\n");
	}
	else if (total < 1) //nice little rebuke for the optimist
	{
		printf("\nDude, you can't grow carrots in something you can't stick your thumb in, try again\n");
	}
	else //the response you want
	{
		printf("\nYou can grow %d carrots in this carrot bed\n", total);
	}
	return total; //returns the function to the main body when called
}
*/