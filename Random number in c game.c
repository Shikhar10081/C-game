#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess;
    int tries = 0;
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Guess the secret number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > secretNumber) {
            printf("Too high. Try again.\n");
        }
        else if (guess < secretNumber) {
            printf("Too low. Try again.\n");
        }
        else {
            printf("Congratulations, you guessed the secret number in %d tries!\n", tries);
        }
    } while (guess != secretNumber);

    return 0;
}
