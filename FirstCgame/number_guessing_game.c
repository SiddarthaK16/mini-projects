#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guesses = 0;
    int r;
    // Seed the random number generator
    srand(time(0));

    // Generate number between 1 and 100
    randomNumber = (rand() % 100) + 1;
    printf("Welcome to this number guessing game \n I am thinking about a number between 1 and 100\n");
    do
    {
        printf("Guess the number : ");
        scanf("%d", &r);
        if (r < randomNumber)
        {
            printf("%d is lower than the random number \n", r);
        }
        else if (r > randomNumber)
        {
            printf("%d is higher than the random number \n", r);
        }
        else
        {
            printf("You guessed the correct number in %d guesses", no_of_guesses+1);
        }
        no_of_guesses++;
    } while (r != randomNumber);

    return 0;
}
