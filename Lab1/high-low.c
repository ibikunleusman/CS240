#include <stdio.h>
//

int
main(int argc, char **argv) {
	int gameover = 0;
  	printf("Welcome to the High Low game...\n");
  	
 
  // Write your implementation here...
  	int low = 1;
  	int high = 100;
  	int mid = 0;
  	
  	while (!gameover) {
  		printf("Think of a number between 1 and 100 and press <enter>");
		getchar();
		while (high >= low) {
			mid = (low+high) / 2;
			printf("Is it higher than %d? (y/n)\n", mid);
			char answer;
			answer = getchar();
			getchar();

			if (answer == 'y')
			{
				low = mid + 1;
			} else if (answer == 'n') {
				high = mid - 1;
			} else {
				printf("Type y or n\n");
			}
		}

		printf("\n>>>>>> The number is %d\n", low);
		printf("\nDo you want to continue playing (y/n)?");
		char answer;
		answer = getchar();
		getchar();
		low = 1;
		high = 100;
		mid = 0;

		if (answer == 'n')
		{
			gameover = 1;
		}
  	}

  	printf("Thanks for playing!!!");
  	
}

