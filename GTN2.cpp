#include <iostream>
#include <stdio.h>
#include <cstdlib>

int main(){

    int guesses = 0;
    int number = rand() % 100;
    bool running = true;

    while(running){
        int guess;

        printf("\nGuess the number (0 - 100) ");
        std::cin >> guess;

        guesses++;

        if (guess > number) {
            printf("Your guess was too high!");
        }
        else if (guess < number) {
            printf("Your guess was too low!");
        }
        else {
            printf("Your guess was correct! You took %i guesses.", guesses);
            running = false;
        }
    }

    return 0;
}