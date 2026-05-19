#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Colors
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

// Functions
void line() {
    printf(BLUE "+--------------------------------------+\n" RESET);
}

void title(char text[]) {
    line();
    printf(BLUE "| %-36s |\n" RESET, text);
    line();
}

int main() {

    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    system("cls || clear");

    title("NUMBER GUESSING GAME");

    printf(CYAN "\n Guess a number between 1 and 100\n" RESET);

    do {

        printf(YELLOW "\n Enter your guess: " RESET);
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf(RED " Too High!\n" RESET);
        }

        else if (guess < number) {
            printf(RED " Too Low!\n" RESET);
        }

        else {
            printf(GREEN "\n ✔ Correct Guess!\n" RESET);
            printf(GREEN " Attempts Taken: %d\n" RESET, attempts);
        }

    } while (guess != number);

    line();

    return 0;
}