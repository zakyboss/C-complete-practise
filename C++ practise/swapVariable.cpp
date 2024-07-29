#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Get the user's choice
    int userChoice;
    cout << "Please input a choice: 1 for Rock, 2 for Paper, 3 for Scissors: ";
    cin >> userChoice;

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        return 1;
    }

    // Generate the bot's choice (1 for Rock, 2 for Paper, 3 for Scissors)
    int botChoice = rand() % 3 + 1;

    // Output the bot's choice
    cout << "Bot chose: ";
    switch(botChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    // Output the user's choice
    cout << "You chose: ";
    switch(userChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    // Determine the winner
    if(userChoice == botChoice) {
        cout << "It's a tie!" << endl;
    } else if((userChoice == 1 && botChoice == 3) ||
              (userChoice == 2 && botChoice == 1) ||
              (userChoice == 3 && botChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "Bot wins!" << endl;
    }

    return 0;
}
