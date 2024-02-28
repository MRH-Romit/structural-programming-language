#include <stdio.h>

int main()
{

    int userInput1, i = 0, userInput2, player2, player1;
    printf("Enter player 1's number for player 2 to guess: ");
    scanf("%d", &userInput1);
    player1 = userInput1;
    int choose = player1 - 1;
    printf("Enter player 2's guess: ");
    do
    {
        scanf("%d", &userInput2);
        player2 = userInput2;

        if (player1 == player2)
            printf("Right, Player 2 wins.");
        else
            printf("Wrong, %d Choices Left!\n", choose);

        printf("Enter player 2's guess: ");

        i++;
        choose--;
    } while (i <= choose && player1 != player2);
    printf("Player 1 wins!");

    return 0;
}
