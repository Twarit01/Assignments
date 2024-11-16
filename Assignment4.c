#include <stdio.h>
#include <stdlib.h>
int main() {
    int userChoice;
    int computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("Enter your choice:\n");
    printf("0: Rock\n");
    printf("1: Paper\n");
    printf("2: Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice\n");
        return 1;
    }
    int randomNum = rand() % 100;
    if (randomNum < 33) {
        computerChoice = 0;
    } else if (randomNum < 66) {
        computerChoice = 1;
    } else {
        computerChoice = 2;
    }
    printf("Your choice: %s\n", choices[userChoice]);
    printf("Computer's choice: %s\n", choices[computerChoice]);
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } 
    else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } 
    else {
        printf("Computer wins!\n");
    }
    return 0;
}
