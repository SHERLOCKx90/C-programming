#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int y)
{
	int z, c = 0;

	printf("Guess a number between 1 and 100\n");
	do {
		if (c > 9)
        {
			printf("\nYou Loose!\n");
			break;
        }
		scanf("%d", &z);
		if (z > y)
        {
			printf("Lower number "
				"please!\n");
			c++;
		}
		else if (y > z)
        {
			printf("Higher number"
				" please!\n");
			c++;
		}
		else
			printf("You guessed the number in %d attempts!\n",c); 
    } while (z!=y);
}

int main()
{
	int y;
	printf("-----G U E S S   T H E   N U M B E R-----\n");

    printf("player 1 : enter the magic number:\n");
    scanf("%d",&y);
	guess(y);

	return 0;
}
