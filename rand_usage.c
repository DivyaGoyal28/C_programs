
	#include<stdio.h>
	#include<stdlib.h>
	#include<time.h>

	int main ()
	{
		int number, input;
		/* initialize random seed: */
		srand ( time(NULL) );
		/* Generate a random number: */
		number = rand() % (5-1+1) + 1 + rand() % (2-0+1) + 0; //always between 10 and 1
		do {
				printf ("Guess the number (1-7)): ");
				scanf ("%d",&input);
				if (number > input)
					printf ("The number is higher\n");
				else 
				printf("The number is smaller\n");
			} while (number!=input);
		printf ("That is correct!\n");
		return 0;
	}
