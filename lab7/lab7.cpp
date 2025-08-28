#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char choice[10];
    int score = 100;  

    while(1) {
        printf("Do you want play game (1 = Play) ( -1 = Exit)): ");
        scanf("%9s", choice);

        if(strcmp(choice , "1") == 0 || strcmp(choice , "!") == 0 || strcmp(choice , "ๅ") == 0 || strcmp(choice , "+") == 0){
            printf("welcome to the game!\n");
            score = 100;

            srand(time(NULL));
            int target = rand() % 100 + 1;
            int low = 1, high = 100;

            while(1) {
                int guess;
                printf("Guess a number between %d and %d: ", low, high);
                if (scanf("%d", &guess) !=1){
                    while(getchar() != '\n');
                    printf("Invalid input. Please enter a number.\n");
                    continue;
                }
                if (guess < low || guess > high) {
                    printf("Your guess is out of range. Please try again.\n");
                    continue;
                }
                if (guess == target) {
                    printf("Score this game : %d\n", score);
                    printf("That is correct! The winning number is : %d.\n" , target);
                    break;
                } else {
                    score -= 10;
                    if (score < 0) score = 0;

                    if (guess < target) {
                        printf("Sorry, the winning number is higher than your guess %d. (Score: %d)\n", guess, score);
                        if (low < guess + 1) low = guess + 1;
                    } else {
                        printf("Sorry, the winning number is lower than your guess %d. (Score: %d)\n", guess, score);
                        if (high > guess - 1) high = guess - 1;
                    }
                }
            }
        }
        else if(strcmp(choice , "-1") == 0 || strcmp(choice , "_!") == 0 || strcmp(choice , "ขๅ") == 0 || strcmp(choice , "๘+") == 0){
            printf("See you again!\n");
            printf("Your final score is: %d\n", score);
            break;
        }
        else {
            printf("Please enter only 1 or -1.\n");
        }
    }

    return 0;
}
