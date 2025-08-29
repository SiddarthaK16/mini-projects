#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    srand(time(0));
    computer = (rand() % 3); // rand() % (range_size) + minimum_value

    /*0----->Rock
      1------> Paper
      2------> Scissor*/
    printf("Welcome to rock paper scissors vs computer! \n");
    while (1)
    {
        printf("Choose 0 for Rock , 1 for Paper and 2 For Scissors :");
        scanf("%d", &player);

        if (player != 0 && player != 1 && player != 2)
        {
            printf("Invalid!! , Only 0,1,2 are allowed\n");
            continue;
        }
        else if (player == computer)
        {
            printf("Game is tied!!\n");
            continue;
        }

        else
        {
            break;
        }
    }
    printf("Computer choose %d \n", computer);

    if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1))
    {
        printf("You beat the computer!!!!!\n");
    }

    else
    {
        printf("Computer wins!!\n");
    }

    printf("Thankyou for playing..");

    return 0;
}